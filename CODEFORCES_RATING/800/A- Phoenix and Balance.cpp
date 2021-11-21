#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll ans=1<<n;
    ll sum=1;
    int i=0;
    for(i=1;sum<n/2;i++)
    {
        ans+=1<<i;
        sum++;
    }
    sum=0;
    for(;i<n;i++)
    {
        sum+=1<<i;
    }
    cout<<ans-sum<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
