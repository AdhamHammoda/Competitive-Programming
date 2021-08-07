#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans1=n*a;
    ll ans2=(n/2)*b + (n%2)*a;
    cout<<min(ans1,ans2)<<endl;
}
int main()
{
//    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}