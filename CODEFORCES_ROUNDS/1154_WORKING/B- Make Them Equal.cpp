#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> s;
    for(int i=0;i<n;i++)cin>>arr[i],s.insert(arr[i]);
    if(s.size()>3)cout<<-1;
    else if(s.size()==3)
    {
        ll mx=*s.rbegin(),mn=*s.begin();
        s.erase(mx),s.erase(mn);
        ll tmp=*s.begin();
        if(tmp-mn!=mx-tmp)cout<<-1;
        else cout<<mx-tmp;
    }
    else
    {
        ll ans=(*(s.rbegin()))-(*(s.begin()));
        if(ans%2==0)ans/=2;
        cout<<ans;
    }

}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
