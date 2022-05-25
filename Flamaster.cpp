#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string konwersjaIntNaString (int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int obliczWystapieniaWybranegoZnaku(string wyraz, int pozycjaZnaku)
{
    int iloscWystapien = 1;
    if(wyraz.length() > pozycjaZnaku)
    {
        while(wyraz[pozycjaZnaku] == wyraz[pozycjaZnaku+1])
        {
            iloscWystapien++;
            pozycjaZnaku ++;
        }
    }
    else
        iloscWystapien =0;
    return iloscWystapien;
}


string skracanieWyrazu(string wyrazDoskrocenia)
{
    int dlugosc = wyrazDoskrocenia.length();
    int iloscWystapien;
    char powtarzajacySieZnak;

    for(int i=0; i<dlugosc-2; i++)
    {
        if(wyrazDoskrocenia[i] == wyrazDoskrocenia[i+1] && wyrazDoskrocenia[i]==wyrazDoskrocenia[i+2])
        {
            iloscWystapien = obliczWystapieniaWybranegoZnaku(wyrazDoskrocenia,i);
            powtarzajacySieZnak = wyrazDoskrocenia[i];
            wyrazDoskrocenia.replace(i,iloscWystapien,powtarzajacySieZnak+konwersjaIntNaString(iloscWystapien));
            dlugosc = wyrazDoskrocenia.length();
        }
    }
    return wyrazDoskrocenia;
}

int main()
{
    int ileTestow;
    cin >> ileTestow;

    for(int i=0; i<ileTestow; i++)
    {
        string wyraz;
        cin >> wyraz;
        cout << skracanieWyrazu(wyraz) << endl;
    }
    return 0;
}

