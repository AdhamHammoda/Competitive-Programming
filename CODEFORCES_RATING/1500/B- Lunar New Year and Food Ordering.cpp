#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n],c[n];
    map<ll,pair<ll,ll>>mp;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>c[i];
    set<tuple<ll,ll,ll>>s;
    for(int i=0;i<n;i++)
    {
        mp[i]={c[i],arr[i]};
        s.insert({c[i],arr[i],i});
    }
    while(m--)
    {
        ll ans=0;
        ll a,b;
        cin>>a>>b;
        a--;
        ll mn=min(b,mp[a].second);
        if(s.find({mp[a].first,mp[a].second,a})!=s.end())
        {
            s.erase({mp[a].first,mp[a].second,a});
            if(mp[a].second>mn)s.insert({mp[a].first,mp[a].second-mn,a});
            ans+=(mn*mp[a].first);
            mp[a]={c[a],mp[a].second-mn};
            b-=mn;
        }
        while(s.size() && b>0)
        {
            auto x=*s.begin();
            ll inda=get<2>(x);
            ll mn=min(b,mp[inda].second);
            s.erase({c[inda],mp[inda].second,inda});
            if(mp[inda].second>mn)s.insert({mp[inda].first,mp[inda].second-mn,inda});
            ans+=(mn*mp[inda].first);
            mp[inda]={mp[inda].first,mp[inda].second-mn};
            b-=mn;
        }
        if(!b)cout<<ans<<endl;
        else cout<<0<<endl;
    }
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