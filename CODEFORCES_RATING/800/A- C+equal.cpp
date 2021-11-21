#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll c=0;
    while(a<=n && b<=n)
    {
        a<b?a+=b:b+=a;
        c++;
    }
    cout<<c<<endl;
}
int main()
{
//    FIO
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
