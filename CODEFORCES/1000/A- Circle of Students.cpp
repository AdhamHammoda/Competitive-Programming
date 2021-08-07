#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mx=0,mn=1e9,mxi=-1,mni=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mx<arr[i])mx=arr[i],mxi=i;
        if(mn>arr[i])mn=arr[i],mni=i;
    }
    ll i=mni;
    while(arr[i]!=n)
    {
        if(!i)
        {
            if(arr[n-1]==arr[i]+1)i=n-1;
            else if(arr[i+1]==arr[i]+1)i++;
            else break;
        }
        else if(i==n-1)
        {
            if(arr[0]==arr[n-1]+1)i=0;
            else if(arr[i-1]==arr[i]+1)i--;
            else break;
        }
        else if(i<n && i>0)
        {
            if(arr[i+1]==arr[i]+1)i++;
            else if(arr[i-1]==arr[i]+1)i--;
            else break;
        }
        else break;
    }
    if(arr[i]==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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