#ifndef __KELVIN
#define __KELVIN
#include <iostream>
#include "01-KonversiSuhu.hpp"

using namespace std;

class Kelvin : public KonversiShuhu {
    public :
        void inputan(){
           cout<<"\n== Kelvin == "<<endl;
           cout<<"Masukan Suhu dalam Kelvin : ";cin>>value1;
        }
        void DisplaytoCelcius(){
           cout<<"\nKelvin to Celcius "<<endl;
            Konversi = value1 - 273 ;
           cout<<"Suhu dalam Kelvin : "<<value1<<" K"<<endl;
           cout<<"Suhu dalam Celcius : "<<Konversi<<" C"<<endl;
        }
        void DisplaytoReamur(){
           cout<<"\nKelvin to Reamur "<<endl;
            Konversi = 0.8 * (value1 - 273) ;
           cout<<"Suhu dalam Kelvin : "<<value1<<" K"<<endl;
           cout<<"Suhu dalam Reamur : "<<Konversi<<" R"<<endl;
        }
        void DisplaytoFahreheit(){
           cout<<"\nKelvin to Fahrenheit "<<endl;
            Konversi = (1.8 * (value1 - 273))+32 ;
           cout<<"Suhu dalam Kelvin : "<<value1<<" K"<<endl;
           cout<<"Suhu dalam Fahrenheit : "<<Konversi<<" F"<<endl;
        }
};

#endif