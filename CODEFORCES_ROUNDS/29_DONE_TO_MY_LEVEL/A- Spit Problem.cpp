#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
map<ll,ll>pos;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        arr[i]=x;
        pos[x]=y;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+pos[arr[i]]==arr[j] && arr[j]+pos[arr[j]]==arr[i])cout<<"YES",exit(0);
        }
    }
    cout<<"NO";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}