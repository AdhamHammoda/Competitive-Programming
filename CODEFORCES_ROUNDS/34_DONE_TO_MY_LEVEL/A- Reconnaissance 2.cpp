#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll mn=1e18;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-arr[(i+1)%n])<mn)
        {
            mn=abs(arr[i]-arr[(i+1)%n]);
            x=i+1;
            y=(i+1)%n + 1;
        }
    }
    cout<<x<<" "<<y;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}