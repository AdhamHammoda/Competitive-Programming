#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    while(n>=10)
    {
        ll mod=n%10,ans=n/10;
        sum+=10*ans;
        n=mod+(n/10);
    }
    if(!sum)cout<<n<<endl;
    else cout<<sum+n<<endl;
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
