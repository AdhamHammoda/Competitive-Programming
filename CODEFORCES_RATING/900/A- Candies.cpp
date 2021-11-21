#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
set<ll>s;
void test_case()
{
    ll n;
    cin>>n;
    if(s.find(n)!=s.end())
    {
        cout<<1<<endl;
        return;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0 && s.find(i)!=s.end())
        {
            cout<<n/i<<endl;
            break;
        }
        else if(n%i==0 && s.find(n/i)!=s.end())
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    s.insert(1);
    for(int i=1;i<38;i++)
    {
        s.insert(*s.rbegin()+binpow(2,i));
    }
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
