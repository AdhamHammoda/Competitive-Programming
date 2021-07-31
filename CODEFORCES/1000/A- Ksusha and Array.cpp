#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%mn)
        {
            cout<<-1;
            return;
        }
    }
    cout<<mn;
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
