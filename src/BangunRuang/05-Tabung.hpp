#ifndef __TABUNG
#define __TABUNG
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"


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
#endif