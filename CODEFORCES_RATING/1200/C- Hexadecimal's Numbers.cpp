#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll n;
ll c=0;
void rec(ll num)
{
    if(num>n)return;
    c++;
    rec(num*10);
    rec(num*10+1);
}
void test_case()
{
    cin>>n;
    rec(1);
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}