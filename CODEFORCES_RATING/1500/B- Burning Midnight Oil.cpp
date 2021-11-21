#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Binary Search
/// 7-21-2021 , 3:31 pm
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return a*ans*ans;
    else return ans*ans;
}
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll low=0,high=1e18,mid=0;
    while(low<high)
    {
        ll sum=0;
        mid=low+(high-low)/2;
        for(int i=0;i<64;i++)
        {
            ll ans=binpow(k,i);
            if(mid/ans<=0)break;
            sum+=mid/ans;
        }
        if(sum<n)
        {
            low=mid+1;
        }
        else if(sum>n)
        {
            high=mid;
        }
        else high=mid;
    }
    cout<<low;
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
