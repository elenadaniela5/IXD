#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if(a>b)
    if(c>a)
    max=c;
    else
        max=a;
    else
        if(c>b)
        max=c;
    else
        max=b;
    cout<<"valoarea maxima este"<<max;

    return 0;
}
