#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
vector<bool> isprime(33002,1);
set<ll> s;
void test_case()
{
    ll n;
    cin>>n;
    set<pair<ll,ll>>p;
    for(auto x:s)
    {
        if(x>n/2)break;
        if(s.find(n-x)!=s.end())
        {
            p.insert({x,n-x});
        }
    }
    cout<<n<<" has "<<p.size()<<" representation(s)"<<endl;
    for(auto x:p)cout<<x.first<<"+"<<x.second<<endl;
    cout<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    for(int i=2;i<=33000;i++)
    {
        for(int j=i+i;j<=33000;j+=i)
        {
            isprime[j]=false;
        }
    }
    for(int i=2;i<=33000;i++)
    {
        if(isprime[i])s.insert(i);
    }
    while(t--)
    {
        test_case();
    }
}
