#include<iostream>
using namespace std;

int main()
{
    for(int i =0;i<=10;i++)
    {
        cout<<i<<endl;
    }
    
    int x = 0;
    cout<<"While loop"<<endl;
    while(x<10)
    {
        cout<<x<<endl;
        x++;
    }
    int y = 0;
    cout<<"Do while "<<endl;
    do
    {
        y++;
        cout<<y<<endl;

    }
    while(y<4);

}

