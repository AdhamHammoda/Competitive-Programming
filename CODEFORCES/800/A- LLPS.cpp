#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 3:10 am
void test_case()
{
    string s;
    cin>>s;
    set<char>st;
    map<char,ll>freq;
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
        st.insert(s[i]);
    }
    char a=*st.rbegin();
    for(int i=0;i<freq[a];i++)cout<<a;
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
