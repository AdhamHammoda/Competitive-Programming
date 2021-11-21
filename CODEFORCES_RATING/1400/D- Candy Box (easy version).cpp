#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=2e5+7;
ll arr[N],freq[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    multiset<ll>ms;
    set<ll>taken;
    for(int i=1;i<=n;i++)
    {
        ms.insert(-freq[i]);
    }
    ll sum=0;
    for(auto x:ms)
    {
        ll pos=-x;
        if(taken.find(pos)==taken.end())
        {
            taken.insert(pos);
            sum+=pos;
            continue;
        }
        while(taken.find(pos)!=taken.end() && pos>0)
        {
            pos--;
        }
        if(!pos)break;
        taken.insert(pos);
        sum+=pos;
    }
    cout<<sum<<endl;
    for(int i=1;i<=n;i++)freq[i]=0;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}