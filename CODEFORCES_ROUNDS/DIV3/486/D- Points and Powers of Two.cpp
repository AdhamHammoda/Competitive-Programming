#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    ll ind=-1,tmp=-1;
    for(int i=0;i<n;i++)
    {
        for(ll j=0;j<33;j++)
        {
            ll tmp1=arr[i]+(1LL<<j),tmp2=arr[i]-(1LL<<j);
            if(s.count(tmp1) && s.count(tmp2))
            {
                cout<<3<<endl<<tmp1<<" "<<arr[i]<<" "<<tmp2;
                return;
            }
            else if(s.count(tmp1))ind=i,tmp=tmp1;
        }
    }
    if(ind!=-1)cout<<2<<endl<<arr[ind]<<" "<<tmp;
    else cout<<1<<endl<<arr[0];
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
