#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , lazy
/// 7-3-2021 , 4:31 AM
void test_case()
{
    ll arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    set<ll>s;
    ll mp[50]={0};
    for(int i=0;i<15;i++)
    {
        s.insert(arr[i]);
        mp[arr[i]]=i;
    }
    ll a,b;
    cin>>a>>b;
    if(mp[b]-mp[a]==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
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
