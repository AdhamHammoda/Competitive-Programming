#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    if(s=="0")cout<<4,exit(0);
    if(s.size()==1)
    {
        ll x=stoll(s);
        ll ans=0;
        for(int i=1;i<=4;i++)
        {
            ll tmp=1;
            for(int j=1;j<=x;j++)tmp*=i;
            ans+=tmp;
        }
        cout<<ans%5;
        return;
    }
    ll x=stoll(s.substr(s.size()-2));
    ll ans=1;
    if(x%4==0)ans+=6,ans+=1,ans+=6;
    else if(x%4==1)ans+=2,ans+=3,ans+=4;
    else if(x%4==2)ans+=4,ans+=9,ans+=6;
    else if(x%4==3)ans+=8,ans+=7,ans+=4;
    cout<<ans%5;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}