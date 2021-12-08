#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
map<vector<ll>,ll> m;
void test_case()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)v[i]=i+1;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll c=0;
    do
    {
        c++;
        m[v]=c;
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<abs(m[a]-m[b]);
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
