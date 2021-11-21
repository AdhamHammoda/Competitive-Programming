#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n];
    ll op=0,ep=0,os=0,es=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        es+=a[i]*(i%2);
        os+=a[i]*(i%2==0);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(i%2)es-=a[i];
        else os-=a[i];
        if(ep+os==es+op)ans++;
        if(i%2)ep+=a[i];
        else op+=a[i];
    }
    cout<<ans;
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