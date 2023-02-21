#include <iostream>

using namespace std;

int main()
{
    cout << "Segitiga Siku - Siku \n"
         << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "%" << ' ';
        }
        cout << '\n';
    }

    cout << "\n\n\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "@" << ' ';
        }
        cout << "\n";
    }

    cout << "\n\n\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << ' ';
        }

        for (int j = i; j <= 5; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }

    cout << "\n\n\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n\n\n\n";

    cout << "Piramid \n"
         << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j;
        }

        for (int j = i; j <= 5; j++)
        {
            cout << "#" << ' ';
        }
        cout << "\n";
    }

    cout << "\n\n\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << ' ';
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}