#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 1:38 pm
ll n;
void test_case()
{
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           c+=(__gcd(arr[i],arr[j])==1 && i!=j);
        }
    }
    c/=2.0;
    double comb=n*(n-1)/2.0;
    double ans=sqrt(comb*6.0/c);
    if(!c)cout<<"No estimate for this data set."<<endl;
    else cout<<fixed<<setprecision(6)<<ans<<endl;
}
int main()
{
    FIO
//    ll t;
//    cin>>t;
//    t=1;
    while(cin>>n)
    {
        if(!n)break;
        test_case();
    }
}
