#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    set<char>st;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    st.size()%2?cout<<"IGNORE HIM!":cout<<"CHAT WITH HER!";
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