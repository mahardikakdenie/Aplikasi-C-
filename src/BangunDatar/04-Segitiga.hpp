#ifndef __SEGITIGA
#define __SEGITIGA
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunDatar.hpp"

class Segitiga : public BangunDatar{
    public:
        void Inputan(){
            cout<<"\n== Segitiga == "<<endl;
            cout<<"Masukan Alas : ";cin>>valueA;
            cout<<"Masukan Tinggi : ";cin>>valueB;
        }
        void Display(){
            Hasil = 0.5 * valueA * valueB ;
            cout<<"\nRumus Luas Segitiga : "<<endl;
            cout<<"0.5"<<" * "<<valueA<<" * "<<valueB<<" = "<<Hasil<<endl;
            cout<<"Luas Segitiga : "<<Hasil<<endl;
        }
};
#endif