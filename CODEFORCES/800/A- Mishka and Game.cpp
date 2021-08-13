#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll sa=0,sb=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        sa+=a>b;
        sb+=b>a;
    }
    if(sa>sb)cout<<"Mishka";
    else if(sb>sa)cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
