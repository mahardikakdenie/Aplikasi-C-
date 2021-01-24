#ifndef __BELAHKETUPAT
#define __BELAHKETUPAT
#include <string>
#include <iostream>

#include "01-BangunDatar.hpp"

using namespace std;

class BelahKetupat : public BangunDatar{
    public:
        void Inputan(){
            cout << "\n== Belah Ketupat == " << endl;
            cout<<"Luas BelahKetupat"<<endl;
            cout<<"Masukan Panjang Diagonal 1 : ";cin>>valueA;
            cout<<"Masukan Panjang Diagonal 2 : ";cin>>valueB;
        }
        void Display(){
            cout<<"\nRumus Luas BelahKetupat: 0.5 * Diagonal1 * diagonal2"<<endl;
            cout<<"Luas BelahKetupat = 0.5"<<" * "<<valueA<<" * "<<valueB<<endl;
            Hasil= 0.5 * valueA * valueB ;
            cout<<"Luas BelahKetupat: "<<Hasil<<endl;
        }
        void InputanK () {
            cout << "\n== Belah Ketupat == " << endl;
            cout << "Masukan Panjang Sisi : " ;cin >> valueA ;
        }
        void DisplayK () {
            cout << "\nKeliling Belah Ketupat : " << endl;
            Hasil = 4 * valueA ;
            cout << "Rumus Keliling Belah Ketupat : 4 * sisi " << endl;
            cout << "Rumus Keliling Belah Ketupat : " << " 4  * " << valueA << " = " << Hasil << endl;
            cout << "Keliling Belah Ketupat : " << Hasil << endl; 
        }

};

#endif