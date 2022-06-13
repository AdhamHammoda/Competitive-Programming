#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
ll weedf[160],weedl[160];
ll n,m;
ll lstrow=1;
void test_case()
{
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        ll lst=-1e18,fst=1e18;
        for(ll j=1;j<=m;j++)
        {
            char a;
            cin>>a;
            if(a=='W')fst=min(fst,j),lst=max(lst,j),lstrow=max(lstrow,i);
        }
        weedf[i]=fst,weedl[i]=lst;
    }
    ll cur=1;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(i!=1);
        if(weedf[i]<=weedl[i])
        {
            if(i%2)sum+=abs(cur-weedf[i]),cur=weedl[i];
            else sum+=abs(cur-weedl[i]),cur=weedf[i];
            sum+=abs(weedl[i]-weedf[i]);
        }
        if(i==lstrow)break;
        if(i%2)
        {
            if(i+1<=n)
            {
                if(weedf[i+1]>weedl[i+1])continue;
                sum+=abs(cur-weedl[i+1]);
                cur=weedl[i+1];
            }
        }
        else
        {
            if(i+1<=n)
            {
                if(weedf[i+1]>weedl[i+1])continue;
                sum+=abs(cur-weedf[i+1]);
                cur=weedf[i+1];
            }
        }
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}