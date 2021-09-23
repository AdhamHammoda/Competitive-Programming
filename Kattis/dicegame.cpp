#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum=0;
    sum=a+b+c+d;
    cin>>a>>b>>c>>d;
    ll sum2=0;
    sum2=a+b+c+d;
    if(sum==sum2)cout<<"Tie";
    else sum2<sum?cout<<"Gunnar":cout<<"Emma";
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
