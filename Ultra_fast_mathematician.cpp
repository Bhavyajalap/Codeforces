#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin>>str1>>str2;
    int m = str1.length();
    for (int i=0;i<m;i++)
    {
        if(str1[i]==str2[i])
        {
            str1[i]='0';
        }
        else
        {
            str1[i]='1';
        }
    }
    cout<<str1;
    return 0;
}
