#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<k;i++)
    {
        char a;
        cin>>a;
        st.insert(a);
    }
    string r="";
    vector<string>v;
    ll ind=-1;
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i])!=st.end())
        {
            r+=s[i];
        }
        else
        {
            ind=i;
            v.push_back(r);
            r="";
        }
    }
    if(ind!=n-1)v.push_back(r);
    ll ans=0;
    for(auto x:v)
    {
        ll sz=x.size();
        ans+=sz*(sz+1)/2;
    }
    cout<<ans;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
