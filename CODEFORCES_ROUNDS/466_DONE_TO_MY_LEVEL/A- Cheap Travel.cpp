#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(b>a*m)cout<<a*n;
    else cout<<(n/m) * b + min((n%m )*a,b);
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}