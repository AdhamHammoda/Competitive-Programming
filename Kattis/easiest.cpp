#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
void test_case()
{
    ll sum=0;
    ll m=n;
    while(m>0)
    {
        sum+=m%10;
        m/=10;
    }
    for(ll i=11;i<=1e6;i++)
    {
        ll tmp=n*i,sum2=0;
        while(tmp>0)
        {
            sum2+=tmp%10;
            tmp/=10;
        }
        if(sum==sum2)
        {
            cout<<i<<endl;
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
//    t=1;
    while(cin>>n)
    {
        if(!n)break;
        test_case();
    }
}
