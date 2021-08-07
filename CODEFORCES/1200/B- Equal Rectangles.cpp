#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[4*n];
    for(int i=0;i<4*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4*n);
    ll area=arr[0]*arr[4*n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[2*i]*arr[4*n-2*i-1]!=area
        || arr[2*i]!=arr[2*i+1]
        || arr[4*n-2*i-1]!=arr[4*n-2*i-2]
        )
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}