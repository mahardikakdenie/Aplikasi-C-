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
            Hasil = valueA * valueA * valueA ; 
            cout<<"\nRumus Volume Kubus : "<<endl;
            cout<<"Sisi"<<" * "<<"Sisi"<<" * "<<"Sisi"<<endl;
            cout<<valueA<<" * "<<valueA<<" * "<<valueA<<" = "<<Hasil<<endl;
            cout<<"Volume dari Kubus : "<<Hasil<<endl;
        }
};
#endif