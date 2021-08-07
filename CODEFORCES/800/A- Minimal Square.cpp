#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll ans=min(a,b)*2;
    if(ans>=max(a,b))
    {
        ans=min(ans,a+b);
    }
    else ans=max(a,b);
    cout<<ans*ans<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
