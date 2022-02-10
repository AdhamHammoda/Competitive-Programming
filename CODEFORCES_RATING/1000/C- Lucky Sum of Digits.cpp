#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
//const ll N=1e6+6;
//vector<string> m[N];
void test_case()
{
    ll n;
    cin>>n;
    string ans=string(1000008,'8');
    ll x4=1e18,x7=1e18;
    for(int i=n;i>=0;i--)
    {
        if(4*i + 7*((n-4*i)/7)==n && (n-4*i)%7==0 && (n>=4*i) && i+((n-4*i)/7)<x4+x7)x4=i,x7=(n-i)/7;
        if(7*i + 4*((n-7*i)/4)==n && (n-7*i)%4==0 && (n>=7*i) && i+((n-7*i)/4)<x4+x7)x4=(n-7*i)/4,x7=i;
    }
    if(x4!=1e18 && x7!=1e18)
    {
        for(int i=0;i<x4;i++)cout<<4;
        for(int i=0;i<x7;i++)cout<<7;
        exit(0);
    }
    cout<<-1;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}