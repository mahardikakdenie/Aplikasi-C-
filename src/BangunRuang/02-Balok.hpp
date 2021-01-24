#ifndef __BALOK
#define __BALOK
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

class Balok : public BangunRuang
{
public:
    void Inputan()
    {
        cout << "\n==Balok==" << endl;
        cout << "Masukan Nilai Panjang : ";
        cin >> valueA;
        cout << "Masukan Nilai Lebar : ";
        cin >> valueB;
        cout << "Masukan Nilai Tinggi : ";
        cin >> valueC;
    }
    void Display()
    {
        Hasil = valueA * valueB * valueC;
        cout << "\nVolume Balok " << endl;
        cout << "Rumus Volume Balok : " << endl;
        cout << "Panjang"
             << " * "
             << "Lebar"
             << " * "
             << "Tinggi" << endl;
        cout << valueA << " * " << valueB << " * " << valueC << " = " << Hasil << endl;
        cout << "Volume Dari Balok : " << Hasil << endl;
    }
    void DisplayL()
    {
        cout << "\nLuas Permukaan Balok " << endl;
        Hasil = 2 * ((valueA * valueB) + (valueA * valueC) + (valueB * valueC));
        cout << "Rumus Luas Permukaan Balok : 2 * ((Panjang * Lebar) + (Panjang * Lebar ) + (Lebar * Tinggi)) " << endl;
        cout << "Rumus Luas Permukaan Balok : 2 * ((" << valueA << " * " << valueB << " ) "
             << " + "
             << " ( " << valueA << " * " << valueC << " ) "
             << " + "
             << " ( " << valueB << " * " << valueC << " ))"
             << " = " << Hasil << endl;
        cout << "Luas Permukaan Balok : " << Hasil << endl;
    }
};
#endif