#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 7:03 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mndiff=1e9,x=-1,y=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            if(abs(arr[i]-arr[i-1])<mndiff)
            {
                mndiff=abs(arr[i]-arr[i-1]);
                x=i+1;
                y=i;
            }
        }
    }
    if(abs(arr[0]-arr[n-1])<mndiff)
    {
        mndiff=abs(arr[0]-arr[n-1]);
        x=1;
        y=n;
    }
    cout<<x<<" "<<y;
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
