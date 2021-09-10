#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    set<string>st;
    sort(s.begin(),s.end());
    do
    {
        st.insert(s);
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<st.size()<<endl;
    for(auto x:st)cout<<x<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
