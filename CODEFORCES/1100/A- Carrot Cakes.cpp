#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-3-2021 , 1:31 AM
void test_case()
{
    double n,t,k,d;
    cin>>n>>t>>k>>d;
    ll ans1=0;
    ans1=ceil(n/k)*t;
    ll ans2=0;
    ll r=n-(ceil(d/t)*k);
    if(r>0)ans2= (d/t)*t + (ceil(r/k/2)*t);
    else ans2= 1e9;
    ans1<=ans2?cout<<"NO":cout<<"YES";
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
