#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 2:20 am
void test_case()
{
    ll n;
    cin>>n;
    ll fodd=0,feven=0;
    ll codd=0,ceven=0;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        if(!fodd && a%2)fodd=i;
        if(!feven && a%2==0)feven=i;
        codd+=(a%2);
        ceven+=(a%2==0);
    }
    codd>ceven?cout<<feven:cout<<fodd;
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
