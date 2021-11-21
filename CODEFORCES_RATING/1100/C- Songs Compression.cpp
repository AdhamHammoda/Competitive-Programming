#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    vector<ll>v;
    ll n,m;
    cin>>n>>m;
    ll minsum=0;
    ll maxsum=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        minsum+=b;
        maxsum+=a;
        v.push_back(a-b);
    }
    if(minsum>m)
    {
        cout<<-1;
        return ;
    }
    ll c=0;
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n && maxsum>m;i++)
    {
        c++;
        maxsum-=v[i];
    }
    cout<<c;
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}