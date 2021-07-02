#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 6:14 PM
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll dis=0,sum=k;
    while(n--)
    {
        char a;
        ll b;
        cin>>a>>b;
        if(a=='+')sum+=b;
        else
        {
            if(sum>=b)
            {
                sum-=b;
            }
            else dis++;
        }
    }
    cout<<sum<<" "<<dis;
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
