#ifndef __SORTINGARRAY
#define __SORTINGARRAY
#include <string>
#include <iostream>

using namespace std;

class SortingArray
{
private:
    int data[10], data2[10];
    int n;

public:
    void Proses(int A, int B)
    {
        int z;
        z = data[B];
        data[B] = data[A];
        data[A] = z;
    }
    void Inputan()
    {
        cout << "Masukan Jumlah Data : ";
        cin >> n;

        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukan Angka Ke-" << i + 1 << " : ";
            cin >> data[i];
        }
        cout << endl;
    }
    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "[" << data[i] << "]";
        }
        cout << endl;
    }
    void eksekusi()
    {
        for (int i = 1; i < n; i++)
        {
            for (int z = n - 1; z >= i; z--)
            {
                if (data[z] < data[z - 1])
                {
                    Proses(z, z - 1);
                }
                Display();
            }
            cout << endl;
        }
    }
};

#endif