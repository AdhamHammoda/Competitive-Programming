#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    set<ll>s;
    for(ll i=1;i*i<=n;i++)if(n%i==0)s.insert(i),s.insert(n/i);
    ll mn=4e18,mx=-4e18;
    for(auto x:s)
    {
        ll tmp=n/x;
        for(auto y:s)
        {
            if(tmp%y==0)
            {
                mn=min((x+1)*(y+2)*((tmp/y)+2)-n,mn);
                mn=min((x+2)*(y+1)*((tmp/y)+2)-n,mn);
                mn=min((x+2)*(y+2)*((tmp/y)+1)-n,mn);
                mx=max((x+1)*(y+2)*((tmp/y)+2)-n,mx);
                mx=max((x+2)*(y+1)*((tmp/y)+2)-n,mx);
                mx=max((x+2)*(y+2)*((tmp/y)+1)-n,mx);
            }
        }
    }
    cout<<mn<<" "<<mx;
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