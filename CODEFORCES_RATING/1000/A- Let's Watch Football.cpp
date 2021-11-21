#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-18-2021 , 8:00 pm
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll all=a*c;
    ll w=b*c;
    ll diff=all-w;
    ll ans=(diff/b);
    if(diff%b)ans++;
    cout<<ans;
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
