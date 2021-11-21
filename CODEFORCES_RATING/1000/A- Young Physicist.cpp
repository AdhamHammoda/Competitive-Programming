#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 6:29 am
void test_case()
{
    ll n;
    cin>>n;
    ll x[n],y[n],z[n];
    ll sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
    (!sumx && !sumy && !sumz)?cout<<"YES":cout<<"NO";
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
