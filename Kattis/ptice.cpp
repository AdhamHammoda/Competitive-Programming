#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string adrian="",bruno="",goran="";
    ll mx1=0,mx2=0,mx3=0;
    for(int i=0;i<=100;i++)
    {
        adrian+="ABC";
        bruno+="BABC";
        goran+="CCAABB";
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==adrian[i])mx1++;
        if(s[i]==bruno[i])mx2++;
        if(s[i]==goran[i])mx3++;
    }
    ll ans=max({mx1,mx2,mx3});
    cout<<ans<<endl;
    if(ans==mx1)cout<<"Adrian"<<endl;
    if(ans==mx2)cout<<"Bruno"<<endl;
    if(ans==mx3)cout<<"Goran"<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
