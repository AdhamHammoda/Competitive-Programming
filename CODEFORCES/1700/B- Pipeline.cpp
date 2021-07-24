#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , binary search
/// 7-23-2021, 3:42 pm
ll n,k;
ll res(ll r)
{
    r--;
    return k*(k+1)/2 - r*(r+1)/2;
}
void test_case()
{
    cin>>n>>k;
    ll sum=k*(k+1)/2 -1 -(k-2);
    if(n==1)
    {
        cout<<0;
        return;
    }
    if(n>sum)
    {
        cout<<-1;
        return;
    }
    if(n<=k)
    {
        cout<<1;
        return;
    }
    n--;k--;
    ll low=1,high=k;
    while(low<high)
    {
        ll mid=low+(high-low)/2;
        if(res(mid)>n)
        {
            low=mid+1;
        }
        else if(res(mid)==n)
        {
            cout<<k-mid+1;
            return;
        }
        else high=mid;
    }
    cout<<k-low+2;
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
