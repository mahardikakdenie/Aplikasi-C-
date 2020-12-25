#include <iostream>
#include <string>
#include "Serverr.CPP"
using namespace std;

int main(int argc, char const *argv[])
{ 
    int Pilih ;
    char lagi ;
    do
    {
        hmm:
        system("cls");
        cout<<"Selamat Datang Di Aplikasi Pemrograman Kami"<<endl;
        cout<<"Pilih Salah Satu Program Kami "<<endl;
        cout<<"1.Math"<<endl;
        cout<<"2.Game Array"<<endl;
        cout<<"Pilih [ 1 / 2 ] : ";cin>>Pilih;
        switch (Pilih)
        {
        case 1:
            Math:
            cout<<"== Math =="<<endl;
            cout<<"1.BangunRuang "<<endl;
            cout<<"2.BangunDatar "<<endl;
            cout<<"Pilih [1] : ";cin>>Pilih;
            if(Pilih == 1){
                BangunRuang:
                cout<<"\nKalkulator Volume "<<endl;
                cout<<"1.Kubus"<<endl;
                cout<<"2.Balok"<<endl;
                cout<<"3.Bola"<<endl;
                cout<<"4.Limas Segitiga"<<endl;
                cout<<"5.Tabung"<<endl;
                cout<<"Pilih [ 1 / 2 / 3 / 4 / 5] : ";cin>>Pilih;
                if(Pilih == 1){
                    Kubus Op1;
                    Op1.Inputan();
                    Op1.Display();
                }else if(Pilih == 2){
                    Balok Op2;
                    Op2.Inputan();
                    Op2.Display();
                }else if(Pilih == 3){
                    Bola Op3;
                    Op3.Inputan();
                    Op3.Display();
                }else if(Pilih == 4){
                    LimasSegitiga Op4;
                    Op4.Inputan();
                    Op4.Display();
                }else if(Pilih == 5){
                    Tabung Op5;
                    Op5.Inputan();
                    Op5.Display();
                }
                else{
                    goto BangunRuang;
                }
            }else if(Pilih == 2){
                BangunDatar:
                cout<<"\nKalkulator Luas"<<endl;
                cout<<"1.Persegi"<<endl;
                cout<<"2.Persegi Panjang"<<endl;
                cout<<"3.Segitiga"<<endl;
                cout<<"4.Trapesium"<<endl;
                cout<<"5.BelahKetupat"<<endl;
                cout<<"Pilih [ 1 / 2 / 3 ] : ";cin>>Pilih;
                if(Pilih == 1){
                    Persegi Op1;
                    Op1.Inputan();
                    Op1.Display();
                }else if(Pilih == 2){
                    PersegiPanjang Op2;
                    Op2.Inputan();
                    Op2.Display();
                }else if(Pilih == 3){
                    Segitiga Op3;
                    Op3.Inputan();
                    Op3.Display();
                }else if(Pilih == 4){
                    Trapesium Op4;
                    Op4.Inputan();
                    Op4.Display();
                }else if(Pilih == 5){
                    BelahKetupat Op5;
                    Op5.Inputan();
                    Op5.Display();
                }
                else{
                    goto BangunDatar;
                }
                
            }else{
                goto Math;
            }
        break;

        case 2:
            Game:
            system("cls");
            cout<<"Game Array "<<endl;
            cout<<"1.Sorting Array"<<endl;
            cout<<"Pilih [ 1 ] : ";cin>>Pilih;
            if(Pilih == 1){
                SortingArray Op1;
                Op1.Inputan();
                Op1.Display();
                Op1.eksekusi();
            }else{
                goto Game;
            }
        break;

        default:
            goto hmm;
            break;
        }
    cout<<"\nUlangi Lagi [ Y / N ]";cin>>lagi;
    } while (lagi == 'Y' || lagi == 'y');
}


