#include <iostream>
#include <string>
using namespace std;

class BangunRuang{
    protected:
        int valueA,valueB,valueC;
        float Hasil;
};
class Balok : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Balok=="<<endl;
            cout<<"Masukan Nilai Panjang : ";cin>>valueA;
            cout<<"Masukan Nilai Lebar : ";cin>>valueB;
            cout<<"Masukan Nilai Tinggi : ";cin>>valueC;
        }
        void Display(){
            Hasil = valueA * valueB * valueC ; 
            cout<<"\nRumus Volume Balok : "<<endl;
            cout<<"Panjang"<<" * "<<"Lebar"<<" * "<<"Tinggi"<<endl;
            cout<<valueA<<" * "<<valueB<<" * "<<valueC<<" = "<<Hasil<<endl;
            cout<<"Volume Dari Balok : "<<Hasil<<endl;
        }
};
class Kubus : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Kubus=="<<endl;
            cout<<"Masukan Nilai Sisi : ";cin>>valueA;
        }
        void Display(){
            Hasil = valueA * valueA * valueA ; 
            cout<<"\nRumus Volume Kubus : "<<endl;
            cout<<"Sisi"<<" * "<<"Sisi"<<" * "<<"Sisi"<<endl;
            cout<<valueA<<" * "<<valueA<<" * "<<valueA<<" = "<<Hasil<<endl;
            cout<<"Volume dari Kubus : "<<Hasil<<endl;
        }
};
class Lingkaran : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Lingkaran=="<<endl;
            cout<<"Masukan Nilai Jari - jari : ";cin>>valueA;
            cout<<"Masukan Nilai Tinggi : ";cin>>valueB;
        }
        void  Display(){
            Hasil = 3.14 * valueA * valueA * valueB ;
            cout<<"\nRumus Volume Lingkaran: "<<endl;
            cout<<"phi"<<" * "<<"Jari - Jari"<<" * "<<"Jari - Jari"<<" * "<<"Tinggi"<<endl;
            cout<<"3.14"<<" * "<<valueA<<" * "<<valueA<<" * "<<valueB<<" = "<<Hasil<<endl;
            cout<<"Volume dari Lingkaran : "<<Hasil<<endl;
        }
};
class Tabung : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Tabung=="<<endl;
            cout<<"Masukan Nilai Jari - jari : ";cin>>valueA;
            cout<<"Masukan Nilai Tinggi : ";cin>>valueB;
        }
         void  Display(){
            Hasil = 3.14 * valueA * valueA * valueB ;
            cout<<"\nRumus Volume Tabung : "<<endl;
            cout<<"phi"<<" * "<<"Jari - Jari"<<" * "<<"Jari - Jari"<<" * "<<"Tinggi"<<endl;
            cout<<"3.14"<<" * "<<valueA<<" * "<<valueA<<" * "<<valueB<<" = "<<Hasil<<endl;
            cout<<"Volume dari Tabung : "<<Hasil<<endl;
        }
};
class LimasSegitiga : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Limas Segitiga=="<<endl;
            cout<<"Masukan Nilai Alas : ";cin>>valueA;
            cout<<"Masukan Nilai Tinggi : ";cin>>valueB;
        }
        void Display(){
            Hasil = 0.1667 * valueA * valueB * valueB ; 
            cout<<"Rumus Volume Limas Segitiga : "<<endl;
            cout<<"0.1667 * alas * tinggi * tinggi"<<endl;
            cout<<"0.1667"<<" * "<<valueA<<" * "<<valueB<<" * "<<valueB<<" = "<<Hasil<<endl;
            cout<<"Volume Dari Limas Segitiga : "<<Hasil<<endl;
        }
};

class SortingArray{
    private:
        int data[10],data2[10];
        int n;

    public:
        void Proses(int A,int B ){
            int z ;
            z = data[B];
            data[B] = data[A] ;
            data[A] = z ;
        } 

        void Inputan(){
            cout<<"Masukan Jumlah Data : ";cin>>n;
            
            cout<<endl;
            for(int i = 0 ; i < n ; i++){
                cout<<"Masukan Anggka : ";cin>>data[i];
            }
            cout<<endl;
        }

        void Display(){
            for (int i = 0; i < n; i++){
                cout<<"["<<data[i]<<"]";
            }
            cout<<endl;
        }

        void eksekusi(){
            for(int i = 1 ; i < n ; i++){
                for(int z = n - 1 ; z >= i ; z--){
                    if(data[z] < data[z-1]){
                        Proses(z,z-1);
                    }
                    Display();
                }
                cout<<endl;
            }
        }
};

int Pilih ; 
int main(int argc, char const *argv[])
{ 
    hmm:
    cout<<"Selamat Datang Di Aplikasi Pemrograman Kami"<<endl;
    cout<<"Pilih Salah Satu Program Kami "<<endl;
    cout<<"1.Math"<<endl;
    cout<<"2.Game Array"<<endl;
    cout<<"Pilih [ 1 / 2 ]";cin>>Pilih;
    switch (Pilih)
    {
    case 1:
        cout<<"== Math =="<<endl;
        cout<<"1.BangunRuang "<<endl;
        cout<<"Pilih [1]";cin>>Pilih;
        if(Pilih == 1){
            cout<<"Sukses"<<endl;
        }
        break;
    case 2:
        cout<<"Sukses"<<endl;
        break;

    default:
        goto hmm;
        break;
    }


}


