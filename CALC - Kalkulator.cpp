#include <iostream>

using namespace std;

int kalkulator(char znak, int a, int b)
{
    switch(znak)
    {
    case'+':
        return a+b;
        break;
    case'-':
        return a-b;
        break;
    case'/':
        return a/b;
        break;
    case'*':
        return a*b;
        break;
    case'%':
        return a%b;
        break;
    }
}

int main()
{
    int a, b;
    char operacja;

    while(cin >> operacja)
    {
        cin >> a >> b;
        cout << kalkulator(operacja,a,b) << endl;
    }
    return 0;
}
