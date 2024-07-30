#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 variables: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"a is the largest number: "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is the largest number: "<<endl;
    }
    else if(c>a && c>b)
    {
        cout <<"c is the largest number: "<<endl;
}
}