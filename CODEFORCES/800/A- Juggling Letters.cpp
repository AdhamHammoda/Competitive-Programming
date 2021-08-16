#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<char,ll>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(auto x:s)m[x]++;
    }
    ll c=0;
    for(auto x:m)c+=x.second%n;
    c?cout<<"NO"<<endl:cout<<"YES"<<endl;
}
int main()
{
//    FIO
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
