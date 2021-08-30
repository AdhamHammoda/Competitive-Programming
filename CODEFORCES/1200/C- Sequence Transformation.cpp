#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,vector<ll>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]].push_back(i);
    }
    ll mn=1e18;
    for(int i=1;i<=n;i++)
    {
        if(!m[i].size())continue;
        ll sum=m[i][0]>0;
        for(int j=1;j<m[i].size();j++)
        {
            sum+=((m[i][j]-m[i][j-1])>1);
        }
        sum+=m[i][m[i].size()-1]<n-1;
        mn=min(mn,sum);
    }
    cout<<mn<<endl;
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
