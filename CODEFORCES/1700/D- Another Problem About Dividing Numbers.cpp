#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,k;
    cin>>a>>b>>k;
    ll sz1=0,sz2=0;
    if(a==b && a==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(k==1)
    {
        if(a!=b && (a%b==0 || b%a==0))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    while(a%2==0)sz1++,a/=2;
    for(ll i=3;i*i<=a;i+=2)
    {
        while(a%i==0)sz1++,a/=i;
    }
    sz1+=(a>1);
    while(b%2==0)sz2++,b/=2;
    for(ll i=3;i*i<=b;i+=2)
    {
        while(b%i==0)sz2++,b/=i;
    }
    sz2+=(b>1);
    if(sz1+sz2>=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
