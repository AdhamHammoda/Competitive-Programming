#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=1e6;
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
int main()
{
    FIO
    ll n,k;
    cin>>n>>k;
    deque<ll> dq;
    while(n--)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
    }
    ll c=0;
    while(!dq.empty())
    {
        bool da5=false;
        if(dq.front()<=k)
        {
            dq.pop_front();
            c++;
            da5=true;
        }
        else if(dq.back()<=k)
        {
            da5=true;
            c++;
            dq.pop_back();
        }
        if(!da5)break;
    }
    cout<<c;
}