#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll origin=n;
    set<ll> fac;
    map<ll,ll>m;
    priority_queue<pair<ll,ll>>pq;
    vector<ll> ans;
    ll mxfreq=0;
    for(ll i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            fac.insert(i);
            n/=i;
            m[i]++;
            mxfreq=max(mxfreq,m[i]);
        }
    }
    if(mxfreq<=1)
    {
        cout<<1<<endl<<origin<<endl;
        return;
    }
    for(auto x:fac)pq.push({m[x],x});
    ll mx=pq.top().second;
    while(m[mx]>1)
    {
        ans.push_back(mx);
        m[mx]--;
        origin/=mx;
    }
    ans.push_back(origin);
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main()
{
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
