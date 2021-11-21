#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c,n;
    cin>>a>>b>>c>>n;
    ll sum=a+b+c+n;
    if(sum%3)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll ans=sum/3;
        if(abs(ans-a)+abs(ans-b)+abs(ans-c)!=n)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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
