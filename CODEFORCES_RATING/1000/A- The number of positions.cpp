#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 2:12 am
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        if(i-1>=a && n-i<=b)c++;
    }
    cout<<c;
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
