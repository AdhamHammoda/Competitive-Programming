#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=3e6;
vector<bool> isprime(N,1);
vector<ll> freq(N);
vector<ll> primes;
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        ll x;
        cin>>x;
        freq[x]++;
    }
    for(ll i=2;i<=2750131;i++)
    {
        if(isprime[i]==1)
        for(ll j=i+i;j<=2750131;j+=i)
        {
            isprime[j]=0;
        }
    }
    for(ll i=2;i<=2750131;i++)
    {
        if(isprime[i]==1)primes.push_back(i);
    }
    vector<ll> ans;
    for(ll i=2750131;i>=2;i--)
    {
        if(!freq[i] || isprime[i]==1)continue;
        ll tmp=1;
        for(auto x:primes)
        {
            if(i%x==0)
            {
                tmp=i/x;
                break;
            }
        }
        while(freq[i]--)
        {
            freq[tmp]--;
            ans.push_back(i);
        }
    }
    for(ll i=2;i<=2750131;i++)
    {
        if(!isprime[i] || !freq[i])continue;
        ll tmp=primes[i-1];
        while(freq[i]--)
        {
            ans.push_back(i);
            freq[tmp]--;
        }
    }
    for(auto x:ans)cout<<x<<" ";
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
