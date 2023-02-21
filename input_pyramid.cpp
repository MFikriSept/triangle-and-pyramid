#include <iostream>

using namespace std;

int baris;

int main()
{

    cout << "Masukkan Input Baris" << endl;
    cin >> baris;

    cout << "--Pyramid--\n"
         << endl;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= baris - i; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= i; ++k)
        {
            cout << "*" << ' ';
        }
        cout << "\n";
    }

    cout << "\n--Inverted Pyramid--\n"
         << endl;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j;
        }
        for (int k = baris; k >= i; k--)
        {
            cout << "*" << ' ';
        }
        cout << "\n";
    }

    cout << "\n--Diamond--\n"
         << endl;
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= baris - i; j++)
        {
            cout << ' ';
        }

        for (int k = 1; k <= i; ++k)
        {
            cout << "*" << ' ';
        }
        cout << "\n";
    }

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ' ';
        }
        for (size_t k = baris - 1; k >= i; k--)
        {
            cout << "*" << ' ';
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}