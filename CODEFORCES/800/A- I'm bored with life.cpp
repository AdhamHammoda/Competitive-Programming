#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:07 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll ans=min(n,m);
    ll mul=1;
    while(ans)
    {
        mul*=ans;
        ans--;
    }
    cout<<mul;
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
