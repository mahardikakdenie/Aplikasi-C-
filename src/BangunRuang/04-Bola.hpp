#ifndef __BOLA
#define __BOLA
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

class Bola : public BangunRuang
{
private:
    float phi;

public:
    void Inputan()
    {
        cout << "\n==Bola==" << endl;
        cout << "Masukan Nilai Jari - jari : ";
        cin >> valueA;
        cout << "Masukan Nilai Tinggi : ";
        cin >> valueB;
    }
    void Display()
    {
        Hasil = 1.33 * 3.14 * valueA * valueA * valueA;
        cout << "\nRumus Volume Lingkaran: " << endl;
        cout << "1.33"
             << " * "
             << "phi"
             << " * "
             << "Jari - Jari"
             << " * "
             << "Jari - Jari"
             << " * "
             << "Tinggi" << endl;
        cout << "1.33"
             << " * "
             << "3.14"
             << " * " << valueA << " * " << valueA << " * " << valueB << " = " << Hasil << endl;
        cout << "Volume dari Lingkaran : " << Hasil << endl;
    }
    void InputanK()
    {
        cout << "\n== Bola == " << endl;
        cout << "Masukan Nilai Jari - Jari : ";
        cin >> valueA;
    }
    void DisplayK()
    {
        cout << "\nLuas Permukaan Bola " << endl;
        phi = 3.14;
        Hasil = 4 * phi * valueA * valueA;
        cout << "Rumus Luas Permukaan Bola : 4 * phi * Jari-Jari * Jari-Jari " << endl;
        cout << "Rumus Luas Permukaan Bola : 4  * " << phi << " * " << valueA << " * " << valueA << " = " << Hasil << endl ;
        cout << "Luas Permukaan Balon : " << Hasil << endl;
    }
};

#endif