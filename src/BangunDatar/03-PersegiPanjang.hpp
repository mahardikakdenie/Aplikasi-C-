#ifndef __PERSEGIPANJANG
#define __PERSEGIPANJANG
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunDatar.hpp"

class PersegiPanjang : public BangunDatar
{
public:
    void Inputan()
    {
        cout << "\n== Persegi Panjang == " << endl;
        cout << "Masukan Nilai Panjang : ";
        cin >> valueA;
        cout << "Masukan Nilai Lebar : ";
        cin >> valueB;
    }
    void Display()
    {
        Hasil = valueA * valueB;
        cout << "\nRumus Luas Persegi Panjang " << endl;
        cout << "Panjang * lebar " << endl;
        cout << valueA << " * " << valueB << " = " << Hasil << endl;
        cout << "Luas Persegi Panjang : " << Hasil << endl;
    }
    void DisplayK()
    {
        Hasil = 2 * (valueA + valueB);
        cout << "\nKeliling Peregi Panjang : " << endl;
        cout << "Rumus Keliling Persegi Panjang : "
             << "2 * ( Panjang + Lebar ) " << endl;
        cout << "Rumus Keliling Persegi Panjang : "
             << " 2  *  (" << valueA << " + " << valueB << ")"
             << " = " << Hasil << endl;
    }
};
#endif