#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    if(k<(n/2) || (n==1 && k))cout<<-1,exit(0);
    if(n==1 && !k)cout<<1,exit(0);
    ll j=0,i=1e9;
    for(j=1;j<(n/2);j++)
    {
        cout<<i<<" "<<i-1<<" ";
        i-=2,k--;
    }
    cout<<(i/k - 1)*k<<" "<<(i/k - 2)*k<<" ";
    if(n%2)cout<<1;
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