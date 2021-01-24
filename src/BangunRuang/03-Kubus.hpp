#ifndef __KUBUS
#define __KUBUS
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

class Kubus : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Kubus=="<<endl;
            cout<<"Masukan Nilai Sisi : ";cin>>valueA;
        }
        void Display(){
            cout << "\nVolume Kubus " << endl;
            Hasil = valueA * valueA * valueA ; 
            cout<<"Rumus Volume Kubus : "<<endl;
            cout<<"Sisi"<<" * "<<"Sisi"<<" * "<<"Sisi"<<endl;
            cout<<valueA<<" * "<<valueA<<" * "<<valueA<<" = "<<Hasil<<endl;
            cout<<"Volume dari Kubus : "<<Hasil<<endl;
        }
        void DisplayK () {
            cout << "\nLuas Permukaan Kubus " << endl;
            Hasil = 6 * valueA * valueA ;
            cout << "Rumus Luas Permukaan Balok : 6 * Sisi * Sisi " <<endl;
            cout << "Rumus Luas Permukaan Balok : " << "6 * " << valueA << " * " << valueA << " = " << Hasil << endl;
            cout << "Luas Permukaan Balok : " << Hasil << endl;
        }
};
#endif