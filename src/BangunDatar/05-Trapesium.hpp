#ifndef __TRAPESIUM
#define __TRAPESIUM
#include <string>
#include <iostream>

#include "01-BangunDatar.hpp"

using namespace std;

class Trapesium : public BangunDatar{
    public:
        void Inputan(){
            cout<<"Masukan Panjang Sisi Sejajar : ";cin>>valueA;
            cout<<"Masukan Tinggi : ";cin>>valueB;
        }
        void Display(){
            cout<<"\nRumus Luas Trapesium : 0.5 * Panjang sisi sejajar * tinggi "<<endl;
            cout<<"Luas Trapesium = 0.5 "<<" * "<<valueA<<" * "<<valueB<<endl;
            Hasil=0.5 * valueA * valueB ;
            cout<<"Luas Trapesium : "<<Hasil<<endl;
        }

};
#endif