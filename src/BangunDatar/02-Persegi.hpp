#ifndef __PERSEGI
#define __PERSEGI
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunDatar.hpp"

class Persegi : public BangunDatar{
    public:
        void Inputan(){
            cout<<"\n== Persegi =="<<endl;
            cout<<"Masukan Nilai sisi : ";cin>>valueA;
        }
        void Display(){
            Hasil = valueA * valueA * valueA ;
            cout<<"\nRumus Luas Persegi : "<<endl;
            cout<<"Sisi * Sisi *"<<endl;
            cout<<valueA<<" * "<<valueA<<" * "<<" = "<<Hasil<<endl;
            cout<<"Luas Persegi : "<<Hasil<<endl;
        }
};
#endif