#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s(n,'a');
    ll x=(sqrt(1+1LL*8*k)-1)/2;
    k-=x*(x+1)/2;
    k?s[n-x-2]=s[n-k]='b':s[n-x-1]=s[n-x]='b';
    cout<<s<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
