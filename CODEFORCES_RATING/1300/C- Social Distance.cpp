#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<string> v;
    ll fst=1e9,lst=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            fst=min(fst,(ll)i);
            lst=max(lst,(ll)i);
        }
    }
    if(lst==-1)
    {
        ll c=0;
        for(int i=0;i<n;i+=k+1)
        {
            c+=(s[i]=='0');
        }
        cout<<c<<endl;
        return;
    }
    string r="";
    for(int i=fst+1;i<=lst;i++)
    {
        if(s[i]=='1')
        {
            v.push_back(r);
            r="";
        }
        else r+=s[i];
    }
    ll c=0;
    ll ans=0;
    for(int i=fst-k-1;i>=0;i--)
    {
        ans++;
    }
    c+=(ans+k)/(k+1);
    ans=0;
    for(int i=lst+k+1;i<n;i++)
    {
        ans++;
    }
    c+=(ans+k)/(k+1);
    ans=0;
    for(auto x:v)
    {
        ans=x.size()-2*k;
        if(ans>0)c+=(ans+k)/(k+1);
    }
    cout<<c<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
