#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll ans=a*b;
    if(b%a)cout<<-1<<endl;
    else cout<<a<<" "<<b<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
