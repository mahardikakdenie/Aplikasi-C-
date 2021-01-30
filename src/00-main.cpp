#include <iostream>
#include <string>

#include "Server/Serverr.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int Pilih;
    char lagi;
    do
    {
    hmm:
        system("cls");
        cout << "Selamat Datang Di Aplikasi Pemrograman Kami" << endl;
        cout << "Pilih Salah Satu Program Kami" << endl;
        cout << "1.Math" << endl;
        cout << "2.Game Array" << endl;
        cout << "3.Konversi Suhu" << endl;
        cout << "Pilih [ 1 / 2 ] : ";
        cin >> Pilih;
        switch (Pilih)
        {

        //Bangun Ruang
        case 1:
        Math:
            system("cls");
            cout << "== Math ==" << endl;
            cout << "1.BangunRuang " << endl;
            cout << "2.BangunDatar " << endl;
            cout << "3.Kembali" << endl;
            cout << "Pilih [1 / 2 / 3 ] : ";
            cin >> Pilih;
            if (Pilih == 1)
            {
            BangunRuang:
                system("cls");
                cout << "Bangun Ruang " << endl;
                cout << "1.Luas Permukaan " << endl;
                cout << "2.Volume " << endl;
                cout << "3.Kembali " << endl;
                cout << "Pilih [ 1 / 2 / 3 ]";
                cin >> Pilih;
                if (Pilih == 1)
                {
                LuasPermukaan:
                    system("cls");
                    cout << "\nLuas Permukaan " << endl;
                    cout << "1.Kubus " << endl;
                    cout << "2.Balok " << endl;
                    cout << "3.Bola " << endl;
                    cout << "4.Limas Segitiga " << endl;
                    cout << "5.Tabung " << endl;
                    cout << "6.Kembali" << endl;
                    cout << "Pilih : ";
                    cin >> Pilih;
                    if (Pilih == 1)
                    {
                        Kubus Op1;
                        Op1.Inputan();
                        Op1.DisplayK();
                    }
                    else if (Pilih == 2)
                    {
                        Balok Op2;
                        Op2.Inputan();
                        Op2.DisplayL();
                    }
                    else if (Pilih == 3)
                    {
                        Bola Op3;
                        Op3.InputanK();
                        Op3.DisplayK();
                    }
                    else if (Pilih == 4)
                    {
                        LimasSegitiga Op4;
                        Op4.Inputan();
                        Op4.DisplayL();
                    }
                    else if (Pilih == 5)
                    {
                        Tabung Op5;
                        Op5.Inputan();
                        Op5.Inputan();
                    }
                    else if (Pilih == 6)
                    {
                        goto Math;
                    }
                    else
                    {
                        goto LuasPermukaan;
                    }
                }
                else if (Pilih == 2)
                {
                Volume:
                    system("cls");
                    cout << "\nVolume " << endl;
                    cout << "1.Kubus" << endl;
                    cout << "2.Balok" << endl;
                    cout << "3.Bola" << endl;
                    cout << "4.Limas Segitiga" << endl;
                    cout << "5.Tabung" << endl;
                    cout << "6.Kembali " << endl;
                    cout << "Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ] : ";
                    cin >> Pilih;
                    if (Pilih == 1)
                    {
                        Kubus Op1;
                        Op1.Inputan();
                        Op1.Display();
                    }
                    else if (Pilih == 2)
                    {
                        Balok Op2;
                        Op2.Inputan();
                        Op2.Display();
                    }
                    else if (Pilih == 3)
                    {
                        Bola Op3;
                        Op3.Inputan();
                        Op3.Display();
                    }
                    else if (Pilih == 4)
                    {
                        LimasSegitiga Op4;
                        Op4.Inputan();
                        Op4.Display();
                    }
                    else if (Pilih == 5)
                    {
                        Tabung Op5;
                        Op5.Inputan();
                        Op5.Display();
                    }
                    else if (Pilih == 6)
                    {
                        goto Math;
                    }
                    else
                    {
                        goto Volume;
                    }
                }
                else
                {
                    goto Math;
                }
            }

            // Bangun Datar
            else if (Pilih == 2)
            {
            BangunDatar:
                system("cls");
                cout << "Bangun Datar " << endl;
                cout << "1.Keliling " << endl;
                cout << "2.Luas " << endl;
                cout << "3.Kembali " << endl;
                cout << "Pilih [ 1 / 2 / 3 ] : ";
                cin >> Pilih;
                if (Pilih == 1)
                {
                Keliling:
                    system("cls");
                    cout << "\nKeliling Bangun Datar" << endl;
                    cout << "1.Persegi " << endl;
                    cout << "2.Persegi Panjang " << endl;
                    cout << "3.Segitiga " << endl;
                    cout << "4.Trapesium " << endl;
                    cout << "5.BelahKetupat " << endl;
                    cout << "6.Kembali " << endl;
                    cout << "Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ] : ";
                    cin >> Pilih;
                    if (Pilih == 1)
                    {
                        Persegi Op1;
                        Op1.Inputan();
                        Op1.DisplayK();
                    }
                    else if (Pilih == 2)
                    {
                        PersegiPanjang Op2;
                        Op2.Inputan();
                        Op2.DisplayK();
                    }
                    else if (Pilih == 3)
                    {
                        Segitiga Op3;
                        Op3.InputanK();
                        Op3.DisplayK();
                    }
                    else if (Pilih == 4)
                    {
                        Trapesium Op4;
                        Op4.InputanK();
                        Op4.DisplayK();
                    }
                    else if (Pilih == 5)
                    {
                        BelahKetupat Op5;
                        Op5.InputanK();
                        Op5.DisplayK();
                    }
                    else if (Pilih == 6)
                    {
                        goto BangunDatar;
                    }
                    else
                    {
                        goto Keliling;
                    }
                                }
                else if (Pilih == 2)
                {
                Luas:
                    system("cls");
                    cout << "\nLuas Bangun Datar" << endl;
                    cout << "1.Persegi" << endl;
                    cout << "2.Persegi Panjang" << endl;
                    cout << "3.Segitiga" << endl;
                    cout << "4.Trapesium" << endl;
                    cout << "5.BelahKetupat" << endl;
                    cout << "6.Kembali" << endl;
                    cout << "Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ] : ";
                    cin >> Pilih;
                    if (Pilih == 1)
                    {
                        Persegi Op1;
                        Op1.Inputan();
                        Op1.Display();
                    }
                    else if (Pilih == 2)
                    {
                        PersegiPanjang Op2;
                        Op2.Inputan();
                        Op2.Display();
                    }
                    else if (Pilih == 3)
                    {
                        Segitiga Op3;
                        Op3.Inputan();
                        Op3.Display();
                    }
                    else if (Pilih == 4)
                    {
                        Trapesium Op4;
                        Op4.Inputan();
                        Op4.Display();
                    }
                    else if (Pilih == 5)
                    {
                        BelahKetupat Op5;
                        Op5.Inputan();
                        Op5.Display();
                    }
                    else if (Pilih == 6)
                    {
                        goto BangunDatar;
                    }
                    else
                    {
                        goto Luas;
                    }
                }
            }
            else if (Pilih == 3)
            {
                goto hmm;
            }
            else
            {
                goto Math;
            }
            break;

        // Sorting Array
        case 2:
        Game:
            system("cls");
            cout << "Game Array " << endl;
            cout << "1.Sorting Array" << endl;
            cout << "2.Kembali " << endl;
            cout << "Pilih [ 1 / 2 ] : ";
            cin >> Pilih;
            if (Pilih == 1)
            {
                SortingArray Op1;
                Op1.Inputan();
                Op1.Display();
                Op1.eksekusi();
            }
            else if (Pilih == 2)
            {
                goto hmm;
            }
            else
            {
                goto Game;
            }
            break;

        // KonversiSuhu
        case 3:
        KonversiSuhu:
            system("cls");
            cout << "\nProgram Konversi Suhu " << endl;
            cout << "1.Celcius " << endl;
            cout << "2.Reamur " << endl;
            cout << "3.Kelvin " << endl;
            cout << "4.Fahrenheit " << endl;
            cout << "5.Kembali " << endl;
            cout << "Pilih [ 1 / 2 / 3 / 4 / 5 ] : ";
            cin >> Pilih;
            if (Pilih == 1)
            {
            Celcius:
                system("cls");
                cout << "\nCelcius Konversi Ke : " << endl;
                cout << "1.Reamur " << endl;
                cout << "2.Kelvin " << endl;
                cout << "3.Fahrenheit " << endl;
                cout << "4.Kembali " << endl;
                cout << "Pilih [ 1 / 2 / 3 / 4 ] : ";
                cin >> Pilih;
                if (Pilih == 1)
                {
                    Celcius toReamur;
                    toReamur.Inputan();
                    toReamur.DisplaytoREAMUR();
                }
                else if (Pilih == 2)
                {
                    Celcius toKelvin;
                    toKelvin.Inputan();
                    toKelvin.DisplaytoKelvin();
                }
                else if (Pilih == 3)
                {
                    Celcius toFahrenheit;
                    toFahrenheit.Inputan();
                    toFahrenheit.DisplaytoFahrenheit();
                }
                else if (Pilih == 4)
                {
                    goto KonversiSuhu;
                }
                else
                {
                    goto Celcius;
                }
            }
            else if (Pilih == 2)
            {
            Reamur:
                system("cls");
                cout << "\nReamur Konversi Ke : " << endl;
                cout << "1.Celcius " << endl;
                cout << "2.Kelvin " << endl;
                cout << "3.Fahrenheit " << endl;
                cout << "4.Kembali " << endl;
                cout << "Pilih [ 1 / 2 / 3 / 4 ] : ";
                cin >> Pilih;
                if (Pilih == 1)
                {
                    Reamur toCelcius;
                    toCelcius.inputan();
                    toCelcius.DisplaytoCelcius();
                }
                else if (Pilih == 2)
                {
                    Reamur toKelvin;
                    toKelvin.inputan();
                    toKelvin.DisplaytoKelvin();
                }
                else if (Pilih == 3)
                {
                    Reamur toFahrenheit;
                    toFahrenheit.inputan();
                    toFahrenheit.DisplaytoFahrenheit();
                }
                else if (Pilih == 4)
                {
                    goto KonversiSuhu;
                }
                else
                {
                    goto Reamur;
                }
            }
            else if (Pilih == 3)
            {
            Kelvin:
                system("cls");
                cout << "Kelvin Konversi Ke : " << endl;
                cout << "1.Celcius " << endl;
                cout << "2.Reamur " << endl;
                cout << "3.Fahrenheit " << endl;
                cout << "4.Kembali " << endl;
                cout << "Pilih : [ 1 / 2 / 3 / 4 ] : ";
                cin >> Pilih;
                if (Pilih == 1)
                {
                    Kelvin toCelcius;
                    toCelcius.inputan();
                    toCelcius.DisplaytoCelcius();
                }
                else if (Pilih == 2)
                {
                    Kelvin toReamur;
                    toReamur.inputan();
                    toReamur.DisplaytoReamur();
                }
                else if (Pilih == 3)
                {
                    Kelvin toFahrenheit;
                    toFahrenheit.inputan();
                    toFahrenheit.DisplaytoFahreheit();
                }
                else if (Pilih == 4)
                {
                    goto KonversiSuhu;
                }
                else
                {
                    goto Kelvin;
                }
            }
            else if (Pilih == 4)
            {
            Fahrenheit:
                system("cls");
                cout << "Fahrenheit Konversi Ke : " << endl;
                cout << "1.Celcius " << endl;
                cout << "2.Reamur " << endl;
                cout << "3.Kelvin " << endl;
                cout << "4.Kembali " << endl;
                cout << "Pilih [ 1 / 2 / 3 / 4 ] : ";
                cin >> Pilih;
                if (Pilih == 1)
                {
                    Fahrenheit toCelcius;
                    toCelcius.inputan();
                    toCelcius.DisplaytoCelcius();
                }
                else if (Pilih == 2)
                {
                    Fahrenheit toReamur;
                    toReamur.inputan();
                    toReamur.DisplaytoReamur();
                }
                else if (Pilih == 3)
                {
                    Fahrenheit toKelvin;
                    toKelvin.inputan();
                    toKelvin.DisplaytoKelvin();
                }
                else if (Pilih == 4)
                {
                    goto KonversiSuhu;
                }
                else
                {
                    goto Fahrenheit;
                }
            }
            else if (Pilih == 5)
            {
                goto hmm;
            }
            else
            {
                goto KonversiSuhu;
            }

            break;
        default:
            goto hmm;
            break;
        }

        cout << "\nKembalii ? [ Y / N ]";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');
}
