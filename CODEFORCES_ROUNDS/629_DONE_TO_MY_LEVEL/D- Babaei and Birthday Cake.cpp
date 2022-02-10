#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=1e5+5;
ll arr[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll r,h;
        cin>>r>>h;
        arr[i]=r*r*h;
    }
    ll ans=arr[0];
    set<pair<ll,ll>>s;
    s.insert({arr[0],arr[0]});
    for(int i=1;i<n;i++)
    {
        auto it=s.upper_bound({arr[i],0});
        if(it==s.end())
        {
            auto tmp=*s.rbegin();
            ans=max(ans,tmp.second+arr[i]);
            s.insert({arr[i],tmp.second+arr[i]});
            continue;
        }
        ll tmp=0;
        if(it!=s.begin())
        {
            it--;
            tmp=(it->second);
        }
        s.insert({arr[i],tmp+arr[i]});
        auto it2=s.find({arr[i],tmp+arr[i]});
        it2++;
        for(;;)
        {
            if(it2==s.end())break;
            if((it2->second)<=tmp+arr[i])
            {
                auto tmpitr=it2;
                it2++;
                s.erase(tmpitr);
            }
            else break;
        }
        ans=max(ans,tmp+arr[i]);
    }
    ld overall=acos(-1.0)*(ld)ans;
    cout<<fixed<<setprecision(10)<<overall;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}