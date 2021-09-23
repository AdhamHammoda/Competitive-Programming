#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string a,b;
    cin>>a>>b;
    ll a1=count(a.begin(),a.end(),'S');
    ll b1=count(b.begin(),b.end(),'S');
    for(int i=0;i<a1*b1;i++)
    {
        cout<<"S(";
    }
    cout<<0;
    for(int i=0;i<a1*b1;i++)
    {
        cout<<")";
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
