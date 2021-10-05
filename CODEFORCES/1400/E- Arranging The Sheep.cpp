#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    vector<ll> pos;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')pos.push_back(i);
    }
    if(!pos.size())
    {
        cout<<0<<endl;
        return;
    }
    ll sz=pos.size();
    ll ind=sz/2;
    ll ans=0;
    ll j=pos[ind]-(sz/2);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            ans+=abs(i-j);
            j++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
