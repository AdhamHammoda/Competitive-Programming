#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll origin=n;
    n-=n%x;
    n+=y;
    for(ll i=n;i>=0;i-=x)
    {
        if(i<=origin)
        {
            cout<<i<<endl;
            return;
        }
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
