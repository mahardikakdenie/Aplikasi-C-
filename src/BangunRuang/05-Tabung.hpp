#ifndef __TABUNG
#define __TABUNG
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

class Tabung : public BangunRuang
{
private:
    float phi;

public:
    void Inputan()
    {
        cout << "\n==Tabung==" << endl;
        cout << "Masukan Nilai Jari - jari : ";
        cin >> valueA;
        cout << "Masukan Nilai Tinggi : ";
        cin >> valueB;
    }
    void Display()
    {
        cout << "\nVolume Tabung " << endl;
        Hasil = 3.14 * valueA * valueA * valueB;
        cout << "Rumus Volume Tabung : " << endl;
        cout << "phi"
             << " * "
             << "Jari - Jari"
             << " * "
             << "Jari - Jari"
             << " * "
             << "Tinggi" << endl;
        cout << "3.14"
             << " * " << valueA << " * " << valueA << " * " << valueB << " = " << Hasil << endl;
        cout << "Volume dari Tabung : " << Hasil << endl;
    }
    void DisplayL()
    {
        cout << "\nLuas Permukaan Tabung " << endl;
        phi = 3.14;
        Hasil = 2 * phi * valueA * (valueB + valueA);
        cout << "Rumus Luas Permukaan Tabung : 2 * phi * jari-jari * (tinggi + jari-jari)";
        cout << "Rumus Luas Permukaan Tabung : 2 * " << phi << " * " << valueA << " * "
             << " ( " << valueB << " + " << valueA << " ) "
             << " = " << Hasil << endl;
        cout << "Luas Permukaan Tabung : " << Hasil << endl;
    }
};
#endif