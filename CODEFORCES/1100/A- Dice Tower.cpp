#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 5:03 am
void test_case()
{
    ll n,x;
    cin>>n>>x;
    ll k=7-x;
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(7-a==k || 7-b==k || a==k || b==k)tr=false;
        k=7-k;
    }
    tr?cout<<"YES":cout<<"NO";
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
