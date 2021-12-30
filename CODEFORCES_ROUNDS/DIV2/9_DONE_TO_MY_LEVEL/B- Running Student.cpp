#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    long double vb,vs;
    cin>>vb>>vs;
    long double arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long double dx,dy;
    cin>>dx>>dy;
    long double sum=0.0,tot=4e17;
    ll ind=0;
    for(int i=1;i<n;i++)
    {
        long double tmpdist=(sqrt((dx-arr[i])*(dx-arr[i])+(dy)*(dy)));
        long double ts=tmpdist/vs;
        long double tb=arr[i]/vb;
        if((ts+tb)<=tot)tot=ts+tb,ind=i+1;
    }
    cout<<ind;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}