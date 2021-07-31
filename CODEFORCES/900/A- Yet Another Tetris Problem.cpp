#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
set<ll>s;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    bool mod=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            mod+=abs(arr[i]-arr[i-1])%2;
        }
    }
    mod?cout<<"NO"<<endl:cout<<"YES"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
    for(int i=1;i<=10000;i++)
    {
        s.insert(i*i);
    }
//    t=1;
    while(t--)
    {
        test_case();
    }

}
