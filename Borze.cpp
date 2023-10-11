#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s="",a;
    cin>>a;
    char array[a.length()+1];
    strcpy(array, a.c_str());
    for(int i=0;i<a.length()+1;i++)
    {
        if(a[i]=='.')
        {
            s=s+'0';
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            s=s+'1';
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            s=s+'2';
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
