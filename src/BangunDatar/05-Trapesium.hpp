#ifndef __TRAPESIUM
#define __TRAPESIUM
#include <string>
#include <iostream>

#include "01-BangunDatar.hpp"

using namespace std;

class Trapesium : public BangunDatar{
    private:
    int AB,BC,CD,DA ;
    public:
        void Inputan(){
            cout << "\n== Trapesium == " << endl ;
            cout<<"Masukan Panjang Sisi Sejajar : ";cin>>valueA;
            cout<<"Masukan Tinggi : ";cin>>valueB;
        }
        void Display(){
            cout << "\nLuas Trapesium : " << endl;
            cout<<"Rumus Luas Trapesium : 0.5 * Panjang sisi sejajar * tinggi "<<endl;
            cout<<"Luas Trapesium = 0.5 "<<" * "<<valueA<<" * "<<valueB<<endl;
            Hasil=0.5 * valueA * valueB ;
            cout<<"Luas Trapesium : "<<Hasil<<endl;
        }
        void InputanK () {
            cout << "\n== Trapesium == " << endl ;
            cout << "Masukan Panjang AB : " ;cin >> AB ;
            cout << "Masukan Panjang BC : " ;cin >> BC ;
            cout << "Masukan Panjang CD : " ;cin >> CD ;
            cout << "Masukan Panjang DA : " ;cin >> DA ;
        }
        void DisplayK () {
            cout << "\nKeliling Trapesium : " << endl;
            Hasil = AB + BC + CD + DA ;
            cout << "Rumus Keliling Trapesium : AB + BC + CD + DA " << endl ;
            cout << "Rumus Keliling Trapesium : " << AB << " + " << BC << " + " << CD << " + " << DA << " = " << Hasil << endl;
            cout << "Keliling Trapesium : " << Hasil << endl;
        }

};
#endif