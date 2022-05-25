#include <iostream>

using namespace std;

int sumowanie(int a,int b, int c)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sumowanie(a,b,c);

    return 0;
}
