#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s,t;
    cin>>s>>t;
    ll c1=0,c2=0;
    for(auto x:s)c1+=(x=='1');
    for(auto x:t)c2+=(x=='1');
    if(s.size()!=t.size() || (!c1 && c2) || (c1 && !c2))cout<<"NO";
    else cout<<"YES";
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