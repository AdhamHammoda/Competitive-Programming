#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,a;
    cin>>n>>a;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll c=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<=a)
        {
            c++;
        }
    }
    cout<<c;
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
