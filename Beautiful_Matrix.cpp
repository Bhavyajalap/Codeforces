#include<iostream>
using namespace std;

int main()
{
    int n,t;
    char array[100];
    cin>>n>>t;
    for(int i=0 ;i < n;++i)
    {
        cin>>array[i];
    }
    for(int i=0;i<t;i++)
    {
        if (array[i]=='B' && array[i+1]=='G')
        {
            array[i]='G';
            array[i+1]='B';
        }
    }
     for(int i=0 ;i < n;++i)
    {
        cout<<array[i];
    }
    return 0;
}
