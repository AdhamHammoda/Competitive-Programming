#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    pair<long double,long double> arr[n];
    long double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
        if(i)sum+=((arr[i].second+arr[i-1].second)/2.0)*(arr[i].first-arr[i-1].first)/1000.0;
    }
    cout<<fixed<<setprecision(10)<<sum;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
