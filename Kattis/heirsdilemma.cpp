#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll sum=0;
    for(ll i=a;i<=b;i++)
    {
        set<ll> s;
        ll m=i;
        while(m>0)
        {
            if(m%10)
            {
                if(i%(m%10)==0)s.insert(m%10);
                else break;
            }
            m/=10;
        }
        sum+=(s.size()==6);
    }
    cout<<sum;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
