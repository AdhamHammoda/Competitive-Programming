#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll arr[]={1,2,3,4,5};
    ll num[6][6];
    for(int i=1;i<=5;i++)for(int j=1;j<=5;j++)cin>>num[i][j];
    ll mx=0;
    do
    {
        ll sum=0;
        vector<ll> v;
        for(auto x:arr)v.push_back(x);
        while(v.size()>=2)
        {
            if(v.size()>=4)sum+=num[v[2]][v[3]]+num[v[3]][v[2]];
            sum+=num[v[0]][v[1]]+num[v[1]][v[0]];
            v.erase(v.begin());
        }
        mx=max(mx,sum);
    }
    while(next_permutation(arr,arr+5));
    cout<<mx;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}