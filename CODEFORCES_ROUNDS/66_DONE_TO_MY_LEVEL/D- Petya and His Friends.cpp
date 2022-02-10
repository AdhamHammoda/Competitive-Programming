#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    if(n<=2)cout<<-1,exit(0);
    for(int i=1;i<=n-2;i++)cout<<2*3*i<<endl;
    cout<<2*47<<endl<<47*3;
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