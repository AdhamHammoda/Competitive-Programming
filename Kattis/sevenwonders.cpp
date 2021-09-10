#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll t=0,c=0,g=0;
    string s;
    cin>>s;
    for(auto x:s)
    {
        t+=(x=='T');
        c+=(x=='C');
        g+=(x=='G');
    }
    cout<<t*t+c*c+g*g+7*min({t,c,g});
}
int main()
{
//    FIO
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
