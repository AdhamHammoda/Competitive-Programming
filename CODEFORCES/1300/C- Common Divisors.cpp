#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll arr[400005];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll gc=arr[0];
    for(int i=0;i<n;i++)
    {
        gc=__gcd(gc,arr[i]);
    }
    set<ll>s;
    for(ll i=1;i*i<=gc;i++)
    {
        if(gc%i==0)
        {
            s.insert(i);
            s.insert(gc/i);
        }
    }
    cout<<s.size();
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}