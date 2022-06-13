#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    cout<<s.substr(s.find('a'));
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("b_basic.in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
