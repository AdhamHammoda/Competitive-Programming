#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    if(m%n)
    {
        cout<<-1;
        return;
    }
    ll ans=m/n;
    ll c=0;
    while(ans>1)
    {
        if(ans%2==0)
        {
           ans/=2;
           c++;
        }
        else if(ans%3==0)
        {
            ans/=3;
            c++;
        }
        else
        {
            cout<<-1;
            return;
        }
    }
    cout<<c;
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