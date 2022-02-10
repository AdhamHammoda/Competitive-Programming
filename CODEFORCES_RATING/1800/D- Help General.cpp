#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    if(n==1)ans=m;
    else if(m==1)ans=n;
    else if(m==2)
    {
        if(n%4==1)ans=n+1;
        else ans=4*((n+3)/4);
    }
    else if(n==2)
    {
        if(m%4==1)ans=m+1;
        else ans=4*((m+3)/4);
    }
    else ans=(n*m+1)/2;
    cout<<ans;
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