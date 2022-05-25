#include <iostream>
#include<math.h>
#include<sstream>

using namespace std;

int stringNaInt(string napis)
{
    int num;
    stringstream ss;
    ss << napis;
    ss >> num;
    return num;
}

string konwersjaIntNaString (int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string odwrocenieStringa(string napisDoOdwocenia)
{
    string bufor;

    for(int i=napisDoOdwocenia.length()-1; i>=0; i--)
    {
        bufor+=napisDoOdwocenia[i];
    }
    return bufor;
}

int main()
{
    int ileTestow;
    cin >> ileTestow;

    for(int i=0; i<ileTestow; i++)
    {

        int liczba,liczbaDoDodania;
        cin >> liczba;
        
        string liczbaString=konwersjaIntNaString(liczba);
        int licznik=0;

        while(liczbaString!=odwrocenieStringa(liczbaString))
        {
            liczbaString = odwrocenieStringa(liczbaString);
            liczba += stringNaInt(liczbaString);
            liczbaString=konwersjaIntNaString(liczba);
            licznik ++;
        }

        cout << liczba << " " << licznik <<  endl;
    }
    return 0;
}
