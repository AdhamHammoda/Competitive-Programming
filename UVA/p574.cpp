#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
vector<ll> subset;
ll arr[50];
bool can=false;
ll n,k;
set<vector<ll>> s;
void solve(ll idx,ll sum)
{
     if(idx==n)
     {
         if(sum==k)
         {
             can=true;
             if(s.find(subset)==s.end())
             {
                 s.insert(subset);
                 for(int i=0;i<subset.size();i++)cout<<subset[i]<<(i!=subset.size()-1?"+":"");
                 cout<<endl;
             }
         }
         return;
     }
     subset.push_back(arr[idx]);
     solve(idx+1,sum+arr[idx]);
     subset.pop_back();
     solve(idx+1,sum);
}
void test_case()
{
    cin>>k>>n;
    if(!k && !n)exit(0);
    can=false;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Sums of "<<k<<":"<<endl;
    solve(0,0);
    if(!can)cout<<"NONE"<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(true)
    {
        test_case();
    }
}
