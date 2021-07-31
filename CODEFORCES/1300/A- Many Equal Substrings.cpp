#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
int main()
{
    FIO
    int x,y,k;
    string s;
    cin>>x>>y>>s;
    k=0;
    for(int i=0; i<x-1;i++)
    {
        if(s.substr(0,i+1)==s.substr(x-i-1))k=i+1;
    }
    cout<<s;
    for (int i = 1 ; i < y ; ++i)
    {
        cout<<s.substr(k);
    }
}