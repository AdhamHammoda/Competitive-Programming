#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    long double arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long double ans=0.0;
    if(n==1)ans=max(ans,max({arr[0],k-arr[0]}));
    if(n==2)ans=max(ans,max({arr[0],(arr[1]-arr[0])/2.0,k-arr[1]}));
    for(int i=1;i<n;i++)ans=max(ans,(arr[i]-arr[i-1])/2.0);
    cout<<fixed<<setprecision(10)<<max({ans,k-arr[n-1],arr[0]});
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