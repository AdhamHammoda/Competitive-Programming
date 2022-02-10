#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    bool z=0;
    for(auto x:s)z+=(x=='0');
    if(!z)s.pop_back(),cout<<s,exit(0);
    for(auto x:s)
    {
        if(z && x=='0')z=false;
        else cout<<x;
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}