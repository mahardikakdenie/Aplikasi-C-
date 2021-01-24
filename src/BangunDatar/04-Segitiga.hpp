#ifndef __SEGITIGA
#define __SEGITIGA
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunDatar.hpp"

class Segitiga : public BangunDatar
{
public:
    void Inputan()
    {
        cout << "\n== Segitiga == " << endl;
        cout << "Masukan Alas : ";
        cin >> valueA;
        cout << "Masukan Tinggi : ";
        cin >> valueB;
    }
    void Display()
    {
        Hasil = 0.5 * valueA * valueB;
        cout << "\nLuas Segitiga" << endl;
        cout << "Rumus Luas Segitiga : " << endl;
        cout << "0.5"
             << " * " << valueA << " * " << valueB << " = " << Hasil << endl;
        cout << "Luas Segitiga : " << Hasil << endl;
    }
    void InputanK()
    {
        cout << "\n== Segitiga == " << endl;
        cout << "Masukan Sisi A : ";
        cin >> valueA;
        cout << "Masukan SiSI B : ";
        cin >> valueB;
        cout << "Masukan Sisi C : ";
        cin >> valueC;
    }
    void DisplayK()
    {
        cout << "\nKeliling Segitiga : " << endl;
        Hasil = valueA + valueB + valueC;
        cout << "Rumus Keliling Segitiga : Sisi A + Sisi B + Sisi C " << endl;
        cout << "Keliling Segitiga : " << valueA << " + " << valueB << " + " << valueC << " = " << Hasil << endl;
        cout << "Keliling Segitiga : " << Hasil << endl;
    }
};
#endif