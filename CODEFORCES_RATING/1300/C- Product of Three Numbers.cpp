#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll> s;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            n/=i;
            break;
        }
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0 && s.find(i)==s.end())
        {
            s.insert(i);
            n/=i;
            break;
        }
    }
    if(s.size()<2 || s.find(n)!=s.end())cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto x:s)cout<<x<<" ";
        cout<<n<<endl;
    }
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
