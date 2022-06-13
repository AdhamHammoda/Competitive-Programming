#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 8:54 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        m[a]=max(m[a],b);
    }
    ll sum=0;
    for(int i=k;i>0;i--)
    {
        if(sum<m[i])
        {
            sum=m[i]+1;
        }
        else sum++;
    }
    cout<<sum;
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
