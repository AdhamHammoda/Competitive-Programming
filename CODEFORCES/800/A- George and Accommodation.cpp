#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:06 am
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        sum+=(a<b && b-a>=2);
    }
    cout<<sum;
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
