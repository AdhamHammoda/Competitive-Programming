#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,c=0;
    cin>>n;
    c+=n/100;
    n-=100*(n/100);
    if(!n)
    {
        cout<<c;
        return;
    }
    c+=n/20;
    n-=20*(n/20);
    if(!n)
    {
        cout<<c;
        return;
    }
    c+=n/10;
    n-=10*(n/10);
    if(!n)
    {
        cout<<c;
        return;
    }
    c+=n/5;
    n-=5*(n/5);
    if(!n)
    {
        cout<<c;
        return;
    }
    c+=n/1;
    n-=n/1;
    cout<<c;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
