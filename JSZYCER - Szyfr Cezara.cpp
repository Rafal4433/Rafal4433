#include <iostream>

using namespace std;

string szyfr(string zdanie)
{
    for(int i=0; i<zdanie.length(); i++)
    {
        if(zdanie[i]==32)
        {
            zdanie[i];
        }
        else if(zdanie[i]>=88)
        {
            zdanie[i]-=23;
        }
        else
        {
            zdanie[i]+=3;
        }
    }
    return zdanie;
}

int main()
{
    string zdanie;
    while(getline(cin, zdanie))
    {
        cout << szyfr(zdanie) << endl;
    }
    return 0;
}
