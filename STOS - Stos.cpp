#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int licznik=0;
    int stos[10];
    char znak;
    int liczba;

    while( cin >> znak)
    {
        switch(znak)
        {
        case '+':
            cin >> liczba;
            if(licznik>=10)
            {
                cout << ":(" << endl;
            }
            else
            {
                stos[licznik++]=liczba;
                cout << ":)" << endl;
            }
            break;
        case '-':
        {
            if(licznik<=0)
            {
                cout << ":(" << endl;
            }
            else
            {
                cout << stos[--licznik] << endl;
            }
            break;
        }
        }
    }
    return 0;
}
