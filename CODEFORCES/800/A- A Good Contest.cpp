#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:20 pm
void test_case()
{
    ll n;
    cin>>n;
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        string s;
        ll a,b;
        cin>>s>>a>>b;
        ans+=(b>a && a>=2400);
    }
    ans?cout<<"YES":cout<<"NO";
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
