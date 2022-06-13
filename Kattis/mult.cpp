#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll cur=-1;
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        if(cur==-1)cur=x;
        else if(x%cur==0)cout<<x<<endl,cur=-1;
    }
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
