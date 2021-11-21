#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 10:16 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    ll mn=1e9,mni=0,mx=-4,mxi=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
            mxi=i;
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
            mni=i;
        }
    }
    if(mni>mxi)swap(mni,mxi);
    cout<<min({mni+n-mxi+1,n-mni+1,mxi})<<endl;
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
