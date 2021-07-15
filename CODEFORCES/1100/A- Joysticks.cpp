#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 1:15 am
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll sum=0;
    if(a==1 && b==1)
    {
        cout<<0;
        return;
    }
    while(a && b)
    {
        ll mn=min(a,b);
        ll mx=max(a,b);
        if(mx<=0 || mn<=0)break;
        sum++;
        mn++;
        mx-=2;
        a=mn;
        b=mx;
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
