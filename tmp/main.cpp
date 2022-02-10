#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    ll mn=1e18,mx=-1e18;
    for(int i=1;i<=n;i++)cin>>arr[i],mn=min(mn,arr[i]),mx=max(mx,arr[i]);
    ll x;
    cin>>x;
    vector<ll> v;
    for(int i=1;i<=n;i++)if(arr[i]==x)v.push_back(i);
    if(!v.size())
    {
        cout<<"No students are 10 years old."<<endl;
        cout<<"Range: "<<mn<<" to "<<mx;
    }
    else if(v.size()==1)
    {
        cout<<"Student "<<v[0]<<" is "<<x<<" years old."<<endl;
        cout<<"Range: "<<mn<<" to "<<mx;
    }
    else
    {
        cout<<"Students ";
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
            if(i!=v.size()-1)cout<<", ";
        }
        cout<<" are "<<x<<" years old."<<endl;
        cout<<"Range: "<<mn<<" to "<<mx;
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
