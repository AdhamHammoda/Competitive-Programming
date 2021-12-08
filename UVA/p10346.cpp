#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,k;
void test_case()
{
    ll sum=n;
    while(n>=k)
    {
        ll mod=n%k;
        sum+=(n/k);
        n/=k;
        n+=mod;
    }
    cout<<sum<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(cin>>n>>k)
    {
        test_case();
    }
}
