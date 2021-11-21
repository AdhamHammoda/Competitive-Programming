#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(!mp[i])
        {
            cout<<n-1<<endl;
            for(int j=1;j<=n;j++)
            {
                if(j!=i)cout<<i<<" "<<j<<endl;
            }
            return;
        }
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
