#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    set<ll> s,pos;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(s.find(arr[i])==s.end() && s.size()<k)s.insert(arr[i]),pos.insert(i+1);
    }
    if(s.size()==k)
    {
        cout<<"YES"<<endl;
        for(auto x:pos)cout<<x<<" ";
        return;
    }
    cout<<"NO";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
