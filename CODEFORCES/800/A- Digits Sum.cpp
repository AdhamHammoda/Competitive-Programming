#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    cout<<(n/10)+(n%10)/10+(n%10==9)<<endl;
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