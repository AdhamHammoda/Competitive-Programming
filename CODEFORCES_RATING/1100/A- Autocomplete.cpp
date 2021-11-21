#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 12:19 am
void test_case()
{
    string s;
    cin>>s;
    ll n;
    cin>>n;
    set<string> st;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        st.insert(a);
    }
    for(auto x:st)
    {
        if(x.find(s)!=string::npos && x.substr(0,s.size())==s)
        {
            cout<<x;
            return;
        }
    }
    cout<<s;
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
