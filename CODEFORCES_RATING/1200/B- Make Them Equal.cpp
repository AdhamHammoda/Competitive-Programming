#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
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
    ll diff=0;
    if(s.size()==1)
    {
        cout<<0;
        return;
    }
    else if(s.size()==2)
    {
        ll a=*s.begin();
        ll b=*s.rbegin();
        if((b-a)%2)cout<<b-a;
        else cout<<(b-a)/2;
        return;
    }
    else if(s.size()==3)
    {
        ll a=*s.begin();
        ll b=*s.rbegin();
        if(s.find((a+b)/2)!=s.end() && a%2==b%2)
        {
            cout<<(b-a)/2;
        }
        else cout<<-1;
        return;
    }
    else cout<<-1;
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