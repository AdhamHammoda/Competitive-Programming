#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , maths
/// 7-3-2021 , 5:28 AM
void test_case()
{
    ll n;
    cin>>n;
    ll r=n/2;
    ll evensum=r*(r+1);
    r+=n%2;
    ll oddsum=r*(r+1) - r;
    cout<<evensum-oddsum;
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
