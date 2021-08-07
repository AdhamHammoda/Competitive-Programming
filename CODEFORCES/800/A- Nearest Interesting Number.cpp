#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    for(int i=n;i<1010;i++)
    {
        ll m=i;
        ll sum=0;
        while(m>0)
        {
            sum+=m%10;
            m/=10;
        }
        if(sum%4==0)
        {
            cout<<i;
            return;
        }
    }
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