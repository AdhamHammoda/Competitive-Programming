#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Greedy
/// 7-5-2021 , 6:44 am
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll mnr=1e5,mxr=-1,mnl=1e5,mxl=-1;
    for(ll i=0;i<s.size();i++)
    {
       if(s[i]=='R')
       {
           mnr=min(mnr,i+1);
           mxr=max(mxr,i+1);
       }
       if(s[i]=='L')
       {
           mnl=min(mnl,i+1);
           mxl=max(mxl,i+1);
       }
    }
    if(mxr!=-1 && mnl!=1e5)
    {
        cout<<mnl<<" "<<mxr+1;
    }
    else if(mxr!=-1 && mnr!=1e5)
    {
        cout<<mnr<<" "<<mxr+1;
    }
    else if(mxl!=-1 && mnl!=1e5)
    {
        cout<<mxl<<" "<<mnl-1;
    }
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
