#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 4:02 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<fixed<<setprecision(10)<<max({k-arr[0],arr[0]})<<" ";
        return;
    }
    else if(n==2)
    {
        cout<<fixed<<setprecision(10)<<max({arr[0],(double)(arr[1]-arr[0])/2.0,k-arr[1]});
        return;
    }
    sort(arr,arr+n);
    ll mn=arr[0],mx=arr[n-1];
    double diff=0.0;
    set<double>s;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(i)s.insert(arr[i]-arr[i-1]);
    }
    double ans=(*s.rbegin()/2.0);
    cout<<fixed<<setprecision(10)<<max({ans,k-arr[n-1],arr[0]});
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
