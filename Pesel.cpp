#include <iostream>

using namespace std;

string sprawdzPesel(long long int bufor)
{
    int szyfr[11] = {1,3,1,9,7,3,1,9,7,3,1}; //wprowadzony odwrotnie
    int suma = 0,pesel[11];

    for(int i=0; i<11; i++)
    {
        pesel[i] = bufor%10;
        bufor = (bufor-pesel[i])/10;
        suma += pesel[i]*szyfr[i];
    }
    if(suma%10==0)
    {
        return "D";
    }
    else
    {
        return "N";
    }
}

int main()
{
    int liczba_danych;
    cin >> liczba_danych;

    for(int i=0; i<liczba_danych; i++)
    {
        long long int pesel;
        cin >> pesel;
        cout << sprawdzPesel(pesel) << endl;
    }
    return 0;
}
