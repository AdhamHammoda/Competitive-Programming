#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll mn(ll a,ll b){if(a<b){return a;}else{return b;}}
ll func(ll a,ll b,ll x, ll y, ll n)
{
    if(n<=a-x)
    {
        a-=n;
        return a*b;
    }
    else
    {
        n-=a-x;
        a=x;
        if(n<=b-y)
        {
            b-=n;
            return a*b;
        }
        else
        {
            n-=b-y;
            b=y;
            return a*b;
        }
    }
}
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        cout<<mn(func(a,b,x,y,n),func(b,a,y,x,n))<<endl;
     }
}