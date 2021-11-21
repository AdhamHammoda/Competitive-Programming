#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,m;
    cin>>n>>m;
    m==1?cout<<"NO"<<endl:cout<<"YES"<<endl<<n<<" "<<n*m<<" "<<n*m+n<<endl;
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
