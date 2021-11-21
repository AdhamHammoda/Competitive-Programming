#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>freq;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        freq[a]++;
    }
    vector<ll> v;
    for(auto x:freq)v.push_back(x.second);
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=v.back();i>=1;i--)
    {
        ll j=v.size()-1;
        ll cur=i;
        ll sum=cur;
        while(cur%2==0 && j>0)
        {
            cur/=2;
            j--;
            if(v[j]<cur)break;
            sum+=cur;
        }
        ans=max(ans,sum);
    }
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
