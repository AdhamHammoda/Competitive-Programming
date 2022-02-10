#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n+1],b[n+1],c[n+1],d[n+1];
    for(int i=1;i<=n;i++)cin>>a[i],c[a[i]]=i;
    for(int i=1;i<=n;i++)cin>>b[i],d[i]=c[b[i]];
    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
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