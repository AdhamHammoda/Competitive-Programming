#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll p=1,num=1;
    while(num<n)
    {
        p*=3;
        num+=p;
    }
    while(p>=1)
    {
        if(num-p>=n)num-=p;
        p/=3;
    }
    cout<<num<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
