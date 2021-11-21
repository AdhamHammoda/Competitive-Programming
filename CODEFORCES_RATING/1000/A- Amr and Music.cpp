#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 8:51 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    set<pair<ll,ll>>s;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert({a,i});
    }
    set<ll>ans;
    for(auto x:s)
    {
        if(k>=x.first)
        {
            k-=x.first;
            ans.insert(x.second);
        }
        else break;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x+1<<" ";
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
