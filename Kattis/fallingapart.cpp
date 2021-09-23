#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll sum1=0,sum2=0;
    sort(arr,arr+n);
    bool tmp=false;
    for(int i=n-1;i>=0;i--)
    {
        if(!tmp)sum1+=arr[i];
        else sum2+=arr[i];
        tmp=!tmp;
    }
    cout<<sum1<<" "<<sum2;
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
