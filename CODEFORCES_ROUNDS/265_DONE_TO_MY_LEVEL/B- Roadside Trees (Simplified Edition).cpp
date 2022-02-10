#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(!i)sum+=arr[i]-1;
        sum++;
        if(i<n-1)
        {
            sum++;
            if(arr[i]>=arr[i+1])sum+=(arr[i]-arr[i+1]);
            else sum+=arr[i+1]-arr[i];
        }
    }
    cout<<sum+1;
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