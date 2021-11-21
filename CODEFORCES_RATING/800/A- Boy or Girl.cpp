#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-2-2021 , 4:52 AM
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
