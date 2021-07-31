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
ll powers[32];
void l()
{
    for(int i=0;i<32;i++)
    {
        powers[i]=binpow(2,i);
    }
}
set<ll>s;
ll search1(ll num)
{
    for(int j=0;j<32;j++)
    {
        if(num>=powers[j] && s.find(num-powers[j])!=s.end())
        {
            return num-powers[j];
        }
        if(s.find(num+powers[j])!=s.end())
        {
            return num+powers[j];
        }
    }
    return -1e18;
}

ll search2(ll num, ll num2)
{
    for(int j=0;j<32;j++)
    {
        if(num>=powers[j] && s.find(num-powers[j])!=s.end())
        {
            ll x=abs(num2-num+powers[j]);
            if(x && (!(x&(x-1))) )return num-powers[j];
        }
        else if(num<=powers[j] && s.find(num+powers[j])!=s.end())
        {
            ll x=abs(num2-num-powers[j]);
            if(x && (!(x&(x-1))))return num+powers[j];
        }
    }
    return -1e18;
}

int main()
{
    //FIO
ll n;
l();
cin>>n;
vector<ll>v(n);
ll mx=-1e18,mn=1e18;
for(int i=0;i<n;i++)
{
    cin>>v[i];
    s.insert(v[i]);
}
bool d1=false;
bool d2=false;
bool d3=false;
ll n1=0,n2=0;
sort(v.begin(),v.end());
for(int i=0 ;i<n;i++)
{
    ll x=v[i];
    ll u=search1(v[i]);
    ll t=search2(u,v[i]);
   if(u!=-1e18 && t!=-1e18 && !d3)
   {
       d3=true;
       cout<<3<<endl;
       cout<<v[i]<<" "<<u<<" "<<t;
       return 0;
   }
   else if(u!=-1e18 && t==-1e18 && !d2)
   {
       d2=true;
       n1=u;
       n2=v[i];
   }
   else if(t==-1e18 && u==-1e18 && !d1)
   {
       d1=true;
       n1=v[i];
   }
}
if(d2)cout<<2<<endl<<n1<<" "<<n2;
else if(d1)cout<<1<<endl<<n1;
}