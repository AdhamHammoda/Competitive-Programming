#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    getline(cin,s);
    stringstream is(s);
    string a;
    ll tot=0,c=0;
    while(is>>a)
    {
        tot++;
        c+=(a.find("ae")!=string::npos);
    }
    ll ans=100*c/tot;
    ans>=40?cout<<"dae ae ju traeligt va":cout<<"haer talar vi rikssvenska";
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
