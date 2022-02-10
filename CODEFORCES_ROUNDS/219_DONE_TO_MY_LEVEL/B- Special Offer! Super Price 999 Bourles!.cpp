#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,d;
    cin>>n>>d;
    ll p=1;
    ll tmp=n;
    while(n/(10*p))
    {
        ll x=n/p;
        ll mod=x%10;
        ll diff=n+(9-mod)*p-10*p;
        if(mod!=9 && (tmp-diff<=d))n=diff;
        if(n-diff>d)break;
        p*=10;
    }
    cout<<n;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}