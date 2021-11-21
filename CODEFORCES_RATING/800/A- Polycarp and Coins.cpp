#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll ans=n/3;
    if(n%3==0)cout<<ans<<" "<<ans<<endl;
    else if(n%3==1)cout<<ans+1<<" "<<ans<<endl;
    else cout<<ans<<" "<<ans+1<<endl;
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