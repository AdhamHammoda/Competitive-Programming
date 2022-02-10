#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll m;
    cin>>m;
    ll q[m];
    for(int i=0;i<m;i++)cin>>q[i];
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    sort(q,q+m);
    ll i=n-1;
    ll sum=0;
    ll x=q[0];
    for(;i>=0;)
    {
        for(int c=0;c<x;c++)
        {
            if(i-c<0)break;
            sum+=a[i-c];
        }
        i=max(i-x-2,-1LL);
    }
    cout<<sum;

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}