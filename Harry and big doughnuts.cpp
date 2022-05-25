#include<iostream>

using namespace std;

void czy_da_rade(int c, int k, int w)
{
    if((c*w)<=k)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

int main()
{
    int ile_danych;
    cin>>ile_danych;

    for(int i=0; i<ile_danych; i++)
    {
        int c,k,w; //c k w [liczba kotów, udźwig Harrego oraz waga pączka]
        cin >> c >> k >> w;
        czy_da_rade(c,k,w);
    }

    return 0;
}
