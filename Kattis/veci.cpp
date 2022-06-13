#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    vector<string> v;
    do
    {
        v.push_back(s);
    }
    while(next_permutation(s.begin(),s.end()));
    if(v.size()==1)cout<<0;
    else cout<<v[1];
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
