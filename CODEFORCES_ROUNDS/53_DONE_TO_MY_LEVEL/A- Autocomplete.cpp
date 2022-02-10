#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    set<string> st;
    ll n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        st.insert(a);
    }
    for(auto x:st)if(x.substr(0,s.size())==s)cout<<x,exit(0);
    cout<<s;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}