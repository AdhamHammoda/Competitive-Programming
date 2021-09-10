#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
ll k,n,a,b;
ll test_case()
{
    cin>>k>>n>>a>>b;
    if(k-n*b<=0)return -1;
    k-=n*b;
    return min(n,(k-1)/(a-b));
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        cout<<test_case()<<endl;
    }
}
