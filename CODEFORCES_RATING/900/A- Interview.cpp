#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 5:49 pm
void test_case()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1|=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum2|=b[i];
    }
    cout<<sum1+sum2;
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
