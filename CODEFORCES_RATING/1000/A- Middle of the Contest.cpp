#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll a=0,b=0,c=0;
    string s;
    cin>>s;
    a = ((s[0]-'0')*10 + s[1]-'0')*60 + (s[3]-'0')*10 + (s[4]-'0');
    cin>>s;
    b = ((s[0]-'0')*10 + s[1]-'0')*60 + (s[3]-'0')*10 + (s[4]-'0');
    c = (a+b)/2;
    ll h=0,m=0;
    h= c/60, m=c%60;
    if(h<10)cout<<0;
    cout<<h;
    cout<<":";
    if(m<10)cout<<0;
    cout<<m;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}