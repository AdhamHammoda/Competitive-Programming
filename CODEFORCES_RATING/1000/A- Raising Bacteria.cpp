#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , bitmasks
/// 7-4-2021 , 5:13 am
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
vector<ll> powers(64);
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<63;i++)
    {
        powers[i]=binpow(2,i);
    }
    ll c=0;
    while(n>0)
    {
        ll it=lower_bound(powers.begin(),powers.end(),n)-powers.begin();
        if(powers[it]>n)it--;
        n-=powers[it];
        c++;
    }
    cout<<c;
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
