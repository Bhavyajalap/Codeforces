#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    if(n==10)
    {
        cout<<"0";
    }
    t=n-10;
    if(t<10)
    {
        cout<<"4";
    }
    else if(t=10)
    {
        cout<<"15";
    }
    else if (t=11)
    {
        cout<<"4";
    }
    return 0;
}
