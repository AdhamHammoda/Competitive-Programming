#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    long double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<ll>());
    long double sum=0.0;
    for(int i=0;i<n;i++)
    {
        if(i%2)sum-=(arr[i]*arr[i]*acos(-1));
        else sum+=(arr[i]*arr[i]*acos(-1));
    }
    cout<<fixed<<setprecision(10)<<sum;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
