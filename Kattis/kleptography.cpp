#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    s1=string(m-n,' ')+s1;
    for(int i=m-1;i>n-1;i--)
    {
        s1[i-n]='a'+(26+(s2[i]-'a')-(s1[i]-'a'))%26;
    }
    cout<<s1;
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
