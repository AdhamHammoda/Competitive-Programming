#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll freq[60];
ll powers[60];
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
void test_case()
{
    ll n,q;
    cin>>n>>q;
    ll mx=0;
    for(int i=0;i<60;i++)
    {
        powers[i]=binpow(2,i);
    }
    while(n--)
    {
        ll a;
        cin>>a;
        ll lg=log2(a);
        freq[lg]++;
        mx=max(mx,lg);
    }
    while(q--)
    {
        ll b;
        cin>>b;
        ll c=0;
        for(int j=mx;j>=0;j--)
        {
            if(b<powers[j])continue;
            c+=min(freq[j],(b/powers[j]));
            b-=min(freq[j]*powers[j],(b/powers[j])*powers[j]);
        }
        b?cout<<-1<<endl:cout<<c<<endl;
    }
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}

 