#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    bool g=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        g+=arr[i]>d;
    }
    sort(arr,arr+n);
    if(arr[0]+arr[1]<=d || !g)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
//    FIO
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
