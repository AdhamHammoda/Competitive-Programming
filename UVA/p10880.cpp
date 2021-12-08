#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll j=0;
void test_case()
{
    j++;
    ll a,b;
    cin>>a>>b;
    cout<<"Case #"<<j<<":";
    if(a==b)
    {
        cout<<" 0"<<endl;
        return;
    }
    set<ll> s;
    for(ll i=1;i*i<=(a-b);i++)
    {
        if((a-b)%i==0)
        {
            s.insert(i),s.insert((a-b)/i);
        }
    }
    ll ind=0;
    for(auto x:s)
    {
        if(x>b)cout<<" "<<x;
    }
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
s