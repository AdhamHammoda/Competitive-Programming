#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:18 am
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll mx=max({a,b,c});
    ll mn=min({a,b,c});
    cout<<mx-mn;
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
