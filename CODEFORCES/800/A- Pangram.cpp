#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-3-2021 , 2:53 AM
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(auto x:s)st.insert(tolower(x));
    st.size()>=26?cout<<"YES":cout<<"NO";
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
