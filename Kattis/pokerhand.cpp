#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<char,ll>m;
    ll mx=0;
    for(int i=0;i<5;i++)
    {
        string s;
        cin>>s;
        m[s[0]]++;
        mx=max(mx,m[s[0]]);
    }
    cout<<mx;
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
