#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 11:57 pm
void test_case()
{
    long double n,m,a;
    cin>>n>>m>>a;
    ll ans1=ceil(n/a);
    ll ans2=ceil(m/a);
    cout<<ans1*ans2;
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
