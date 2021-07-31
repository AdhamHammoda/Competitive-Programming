#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:35 pm
set<ll>s;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    bool can=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(s.find(arr[i])==s.end())can=true;
    }
    !can?cout<<"NO"<<endl:cout<<"YES"<<endl;
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
