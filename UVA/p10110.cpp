#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n;
void test_case()
{
    ll x=sqrt(n);
    x*x==n?cout<<"yes"<<endl:cout<<"no"<<endl;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(cin>>n)
    {
        if(n==0)break;
        test_case();
    }
}
