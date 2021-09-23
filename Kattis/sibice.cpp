#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    while(n--)
    {
        ll c;
        cin>>c;
        if(c*c<=a*a+b*b)cout<<"DA"<<endl;
        else cout<<"NE"<<endl;
    }
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
