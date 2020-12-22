#ifndef __BALOK
#define __BALOK
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

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
#endif