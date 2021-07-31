#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 3:21 pm
bool isprime(ll n)
{
    if(n==1)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        set<ll>s;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(isprime(j))s.insert(j);
                if(isprime(i/j))s.insert(i/j);
            }
        }
        sum+=(s.size()==2);
    }
    cout<<sum;
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
