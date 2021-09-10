#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    for(ll i=n;i<=1e10;i++)
    {
        ll m=i;
        ll sum=0;
        while(m>0)
        {
            sum+=m%10;
            m/=10;
        }
        if(i%sum==0)
        {
            cout<<i;
            return;
        }
    }
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
