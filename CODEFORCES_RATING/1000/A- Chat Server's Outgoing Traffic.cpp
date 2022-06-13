#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    set<string> st;
    ll c=0;
    while(getline(cin,s))
    {
        if(s[0]!='+' && s[0]!='-')
        {
            ll x=s.find(':');
            s=s.substr(x+1);
            c+=(s.size())*(st.size());
        }
        else if(s[0]=='+')s=s.substr(1),st.insert(s);
        else if(s[0]=='-')s=s.substr(1),st.erase(s);
    }
    cout<<c;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}