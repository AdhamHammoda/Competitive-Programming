#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll lst=n-2;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        {
            for(int j=i;j<=lst;j++)
            {
                if(arr[j]<arr[j+1])break;
                swap(arr[j],arr[j+1]);
            }
            lst=i-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
