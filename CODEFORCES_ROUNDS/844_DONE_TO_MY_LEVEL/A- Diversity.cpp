#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    ll k;
    cin>>k;
    if(k>s.size())cout<<"impossible",exit(0);
    set<char> st;
    for(auto x:s)st.insert(x);
    ll sz=st.size();
    cout<<max(0LL,k-sz);
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