#ifndef __FAHRENHEIT
#define __FAHRENHEIT
#include <iostream>
#include "01-KonversiSuhu.hpp"

using namespace std;

class Fahrenheit : public KonversiShuhu {
    public:
        void inputan(){
           cout<<"\n== Fahrenheit == "<<endl;
           cout<<"Masukan Sudu dalam Fahrenheit : ";cin>>value1;
        }
        void DisplaytoCelcius(){
           cout<<"\nFahrenheit to Celcius : "<<endl;
            Konversi = 0.556 * (value1 - 32) ;
           cout<<"Suhu dalam Fahrenheit : "<<value1<<" F"<<endl;
           cout<<"Suhu dalam Celcius : "<<Konversi<<" C"<<endl;
        }
        void DisplaytoReamur(){
           cout<<"\nFahrenheit to Reamur : "<<endl;
            Konversi = 0.44 * (value1 - 32) ;
           cout<<"Suhu dalam Fahrenheit : "<<value1<<" F"<<endl;
           cout<<"Suhu dalam Reamur : "<<Konversi<<" R"<<endl;
        }
        void DisplaytoKelvin(){
           cout<<"\nFahrenheit to Kelvin : "<<endl;
            Konversi = (0.556 * (value1 - 32)) + 273 ;
            cout<<"Suhu dalam Fahrenheit : "<<value1<<" F"<<endl;
            cout<<"Suhu dalam Kelvin : "<<Konversi<<" K"<<endl;
        }
};

#endif