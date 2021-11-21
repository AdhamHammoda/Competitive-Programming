#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool isdisturbed[200];
ll arr[200];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
        {
            isdisturbed[i]=1;
        }
    }
    ll c=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==1 && arr[i-1]==0 && arr[i+1]==0 && isdisturbed[i-1] && isdisturbed[i+1])
        {
            isdisturbed[i-1]=0;
            isdisturbed[i+1]=0;
            c++;
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1 && isdisturbed[i])
        {
            c++;
        }
    }
    cout<<c;
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}