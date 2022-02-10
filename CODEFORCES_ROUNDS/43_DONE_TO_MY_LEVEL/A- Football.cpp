#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    map<string,ll>m;
    map<ll,string>freq;
    string a;
    while(n--)cin>>a,m[a]--,freq[m[a]]=a;
    for(auto x:freq)cout<<x.second,exit(0);

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}