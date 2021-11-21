#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    vector<ll> v;
    ll n=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')v.push_back(i);
    }
    ll ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(i)
        {
            ans=max(ans,v[i]-v[i-1]);
        }
    }
    if(v.size())
    {
        ans=max(v[0]+1,ans);
        ans=max(n-v[v.size()-1],ans);
        cout<<ans<<endl;
    }
    else
    {
        cout<<n+1<<endl;
    }
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
