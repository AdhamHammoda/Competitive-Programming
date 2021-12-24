#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ll tmp=x*a/b;
        cout<<x - (tmp*b/a) - ((tmp*b)%a>0)<<" ";
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}