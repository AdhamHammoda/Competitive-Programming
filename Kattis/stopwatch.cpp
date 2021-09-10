#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2)sum+=arr[i]-arr[i-1];
    }
    n%2?cout<<"Still Running":cout<<sum;
}
int main()
{
    FIO
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
