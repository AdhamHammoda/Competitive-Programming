#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll ans1=s/n;
    ll ans2=s%n;
    if(ans1<=a)
    {
        if(s-ans1*n<=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(s-b<=a*n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
