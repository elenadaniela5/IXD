#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x=";cin>>x;
    cout<<"cifra unitatilor este"<<x%10<<endl;
    cout<<"cifra zecilor este"<<(x/10)%10<<endl;
    int x1;
    x1==x;
    while(x1>10) x1==x1/10;
    cout<<"prima cifra din stanga este"<<x1<<endl;
    cout<<"numarul format din primele doua  cifre din dreapta este"<<x%100<<endl;
    x1==x;
    while(x1>100)x1==x1/10;
    cout<<"numarul format din primele doua cifre din stanga este"<<x1<<endl;
    return 0;
}
