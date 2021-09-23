#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    a+=b;
    while(a>=c)
    {
        ll tmp=a/c;
        sum+=tmp;
        a%=c;
        a+=tmp;
    }
    cout<<sum;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
