#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k,t;
    cin>>n>>k>>t;
    long double sum=0.0;
    long double tot=(long double)k*n;
    for(int i=0;i<n;i++)
    {
        ll x=0;
        for(int j=0;j<=k;j++)
        {
            if(100.0*(sum+(long double)j)/tot>t)
            {
                cout<<j-1<<" ";
                for(int k=i+1;k<n;k++)cout<<0<<" ";
                exit(0);
            }
        }
        sum+=k;
        cout<<k<<" ";
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}