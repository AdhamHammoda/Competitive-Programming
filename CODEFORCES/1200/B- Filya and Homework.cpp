#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-21-2021 , 8:33 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()<=2)
    {
        cout<<"YES";
        return;
    }
    else if(s.size()>=4)
    {
        cout<<"NO";
        return;
    }
    ll low=*s.begin();
    ll high=*s.rbegin();
    if(s.find((low+high)/2)!=s.end() && (low+high)%2==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
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
