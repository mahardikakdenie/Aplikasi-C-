#ifndef __REAMUR
#define __REAMUR
#include <iostream>
#include "01-KonversiSuhu.hpp"

using namespace std;

class Reamur : public KonversiShuhu{
    public:
        void inputan(){
           cout<<"\n== Reamur == "<<endl ;
           cout<<"Masukan Suhu dalam Reamur  : ";cin>>value1;
        }
        void DisplaytoCelcius(){
           cout<<"\nReamur to Celcius "<<endl;
            Konversi = 1.25 * value1 ;
           cout<<"Suhu dalam Reamur : "<<value1<<" R"<<endl;
           cout<<"Suhu dalam Celcius : "<<Konversi<<" C"<<endl;
        }
        void DisplaytoKelvin(){
           cout<<"\nReamur to Kelvin"<<endl;
            Konversi = (1.25 * value1) + 273 ;
           cout<<"Suhu Dalam Reamur : "<<value1<<" R"<<endl;
           cout<<"Suhu dalam Kelvin  : "<<Konversi<<" K"<<endl;
        }
        void DisplaytoFahrenheit(){
           cout<<"\nReamur to Fahrenheit "<<endl;
            Konversi = (2.25 * value1) + 32 ;
           cout<<"Suhu dalam Reamur : "<<value1<<" R"<<endl;
           cout<<"Suhu dalam Fahrenheit : "<<Konversi<<" F"<<endl;
        }
};

#endif