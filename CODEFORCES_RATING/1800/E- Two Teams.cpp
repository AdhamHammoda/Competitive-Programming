#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll team[200005];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    set<pair<ll,ll>>s;
    set<ll> pos;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pos.insert(i);
        s.insert({arr[i],i});
    }
    ll c=0;
    while(s.size())
    {
        auto x=*s.rbegin();
        ll elem=x.first;
        ll ind=x.second;
        set<ll> pospos;
        team[elem]=1+c%2;
        ll ans=k;
        auto it = pos.lower_bound(ind+1);
        set<ll>::iterator r;
        for(r=it;r!=pos.end();r++)
        {
            if(*r==ind)continue;
            if(!ans)break;
            ll p=*r;
            pospos.insert(p);
            ans--;
            team[arr[p]]=1+c%2;
            s.erase({arr[p],p});
        }
        it = pos.lower_bound(ind-1);
        ans=k;
        for(r=it;r!=pos.begin();r--)
        {
            if(*r==ind)continue;
            ll p=*r;
            if(!ans)break;
            pospos.insert(p);
            ans--;
            team[arr[p]]=1+c%2;
            s.erase({arr[p],p});
        }
        if(ans && *pos.begin()<ind)
        {
            pospos.insert(*pos.begin());
            ans--;
            team[arr[*pos.begin()]]=1+c%2;
            s.erase({arr[*pos.begin()],*pos.begin()});
        }
        for(auto x:pospos)
        {
            pos.erase(x);
        }
        c++;
        pos.erase(ind);
        s.erase({elem,ind});
    }
    for(int i=0;i<n;i++)
    {
        cout<<team[arr[i]];
    }
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}