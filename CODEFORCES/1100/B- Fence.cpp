#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 11:07 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n+1];
    ll cumsum[n+1];
    arr[0]=0;
    cumsum[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        cumsum[i]=cumsum[i-1]+arr[i];
    }
    ll mn=1e9,ind=1;
    for(int i=1;i<=n-k+1;i++)
    {
        if(cumsum[i+k-1]-cumsum[i-1]<mn)
        {
            mn=cumsum[i+k-1]-cumsum[i-1];
            ind=i;
        }
    }
    cout<<ind;
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
