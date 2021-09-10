#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll l,d,x;
    cin>>l>>d>>x;
    ll mx=0,mn=1e18;
    for(int i=l;i<=d;i++)
    {
        ll m=i,sum=0;
        while(m>0)
        {
            sum+=m%10;
            m/=10;
        }
        if(sum==x)mn=min(mn,(ll)i),mx=max(mx,(ll)i);
    }
    cout<<mn<<endl<<mx;
}
int main()
{
    FIO
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
