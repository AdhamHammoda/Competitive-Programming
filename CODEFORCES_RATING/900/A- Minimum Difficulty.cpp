#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-14-2021 , 12:57 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==3)
    {
        cout<<arr[n-1]-arr[0];
        return;
    }
    ll mnmax=1e9;
    for(int i=1;i<n-1;i++)
    {
        ll mxdiff=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                mxdiff=max(mxdiff,arr[j+1]-arr[j-1]);
                j++;
            }
            else if(j)
            {
                mxdiff=max(mxdiff,arr[j]-arr[j-1]);
            }
        }
        mnmax=min(mnmax,mxdiff);
    }
    cout<<mnmax;
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
