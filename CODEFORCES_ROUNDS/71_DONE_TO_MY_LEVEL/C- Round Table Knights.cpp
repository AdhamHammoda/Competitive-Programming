#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    set<ll> divisors;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)divisors.insert(i),divisors.insert(n/i);
    }
    for(ll i=1;i<=n;i++)
    {
        if(!arr[i])continue;
        for(auto x:divisors)
        {
            ll c=0;
            bool can=true;
            ll lst=0;
            for(int j=i;j<=n;j+=x)
            {
                lst=j;
                c++;
                if(!arr[j])
                {
                    can=false;
                    break;
                }
            }
            if(!c)continue;
            if(n%c==0 && c>=3 && can && (n-lst+1)+(i-1)==x)cout<<"YES",exit(0);
        }
    }
    cout<<"NO",exit(0);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}