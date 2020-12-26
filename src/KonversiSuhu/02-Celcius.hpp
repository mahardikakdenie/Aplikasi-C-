#ifndef __CELSIUS
#define __CELCIUS

#include <iostream>

#include "01-KonversiSuhu.hpp"

using namespace std;

class Celcius : public KonversiShuhu{
    public:
        void Inputan(){
            cout<<"\n== Celcius == "<<endl;
            cout<<"Masukan Suhu Dalam Celcius : ";cin>>value1;
        }
        void DisplaytoREAMUR(){
            cout<<"\nCelcius to reamur "<<endl;
            Konversi = 0.8 * value1 ;
            cout<<"Suhu dalam Celcius : "<<value1<<" C"<<endl;
            cout<<"Suhu dalam Reamur : "<<Konversi<<" R"<<endl;
        }
        void DisplaytoKelvin(){
            cout<<"\nCelcius to Kelvin : "<<endl;
            Konversi = value1 + 273 ;
            cout<<"Suhu dalam Celcius : "<<value1<<" C"<<endl;
            cout<<"Suhu dalam Kelvin  : "<<Konversi<<" K"<<endl;
        }
        void DisplaytoFahrenheit(){
            cout<<"\nCelcius to Fahrenheit "<<endl;
            Konversi = (1.8 * value1) + 32 ;
            cout<<"Suhu dalam Celcius : "<<value1<<" C"<<endl;
            cout<<"Suhu Dalam Fahrenheit : "<<Konversi<<" F"<<endl;
        }
};
#endif