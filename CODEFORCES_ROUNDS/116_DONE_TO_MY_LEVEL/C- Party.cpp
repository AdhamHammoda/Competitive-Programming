#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
ll par[2000];
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    for(int i=1;i<=n;i++)cin>>par[i];
    for(int i=1;i<=n;i++)
    {
        ll tmp=0,j=i;
        while(par[j]!=-1)tmp++,j=par[j];
        c=max(c,tmp+1);
    }
    cout<<c;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}