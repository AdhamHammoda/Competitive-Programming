#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> inc;
    set<ll> dec;
    bool cant=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(inc.find(arr[i])==inc.end())
        {
            inc.insert(arr[i]);
        }
        else if(dec.find(arr[i])==dec.end())
        {
            dec.insert(arr[i]);
        }
        else cant=true;
    }
    if(cant)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES"<<endl;
    cout<<inc.size()<<endl;
    for(auto x:inc)
    {
        cout<<x<<" ";
    }
    cout<<endl<<dec.size()<<endl;
    set<ll>::reverse_iterator rit;
    for (rit=dec.rbegin(); rit!=dec.rend();rit++)
    {
        cout<<*rit<<" ";
    }
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