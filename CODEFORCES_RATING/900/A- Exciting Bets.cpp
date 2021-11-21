#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,m;
    cin>>n>>m;
    if(abs(n-m))cout<<abs(n-m)<<" "<<min((n%abs(n-m)),abs(n-m)-(n%abs(n-m)))<<endl;
    else cout<<0<<" "<<0<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}
