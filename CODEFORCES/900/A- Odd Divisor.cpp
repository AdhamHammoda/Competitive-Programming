#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:48 pm
set<ll>s;
void test_case()
{
    ll n;
    cin>>n;
    if(n%2)cout<<"YES"<<endl;
    else n&&(!(n&(n-1)))?cout<<"NO"<<endl:cout<<"YES"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
    for(int i=1;i<=10000;i++)
    {
        s.insert(i*i);
    }
//    t=1;
    while(t--)
    {
        test_case();
    }

}
