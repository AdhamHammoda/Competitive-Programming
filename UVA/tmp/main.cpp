#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll arr[200005];
void test_case()
{
    ll n;
    cin>>n;
    ll mx=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i]; //lol
    }
    if(n<=2)cout<<0<<endl;
    else cout<<-(sum-n+1)<<endl;
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
