#include<bits/c++io.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,t=0,array[100][100];
    cin>>n;
    for( i = 0 ; i <n; ++i ) 
    {   
        for(j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<n;i++)
        {
            t=+array[i][j];
        }
        if (t!=0)
        {
            cout<<"no";
            break;
        }
    }
    if(t==0)
    {
        cout<<"yes";
    }
    return 0;
}
