#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0,mx=-1e18;
    ll sz=1,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(!i)mx=max(mx,arr[i]);
        else
        {
            sz+=arr[i]*arr[i-1]<0;
            if(arr[i]*arr[i-1]<0)
            {
                c++;
                sum+=mx;
                mx=arr[i];
                continue;
            }
            mx=max(mx,arr[i]);
        }
    }
    if(c<sz)sum+=mx;
    cout<<sum<<endl;
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
