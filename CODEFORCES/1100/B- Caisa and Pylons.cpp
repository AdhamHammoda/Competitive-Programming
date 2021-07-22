#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 8:11 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=arr[0];
    ll energy=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(arr[i]>=arr[i+1])
            {
                energy+=arr[i]-arr[i+1];
            }
            else
            {
                if(energy+arr[i]-arr[i+1]<0)
                {
                    ans+=abs(energy+arr[i]-arr[i+1]);
                    energy=0;
                }
                else energy+=arr[i]-arr[i+1];
            }
        }
    }
    cout<<ans;
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
