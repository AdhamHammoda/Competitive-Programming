#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
long double arr[6000];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    long double ans=0.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(j-i+1>=k)
            {
                ans=max(ans,(arr[j]-arr[i-1])/(long double)(j-i+1));
            }
        }
    }
    cout<<fixed<<setprecision(10)<<ans;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
