#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 2:46 am
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll ans=min(n,m);
    ans%2?cout<<"Akshat":cout<<"Malvika";
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
