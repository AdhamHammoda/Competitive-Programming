#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s,t;
    cin>>s>>t;
    ll mn=min(s.size(),t.size());
    int i=0;
    for(;i<mn;i++)
    {
        if(s[s.size()-i-1]!=t[t.size()-i-1])break;
    }
    cout<<s.size()+t.size()-(2*i);
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
