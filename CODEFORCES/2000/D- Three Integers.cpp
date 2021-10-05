#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=1e18;
    ll ansa=0,ansb=0,ansc=0;
    for(int i=1;i<=2*a;i++)
    {
        for(int j=i;j<=2*b;j+=i)
        {
            ll tmp=j*(c/j);
            if(ans>abs(i-a)+abs(j-b)+abs(tmp-c))
            {
                ans=abs(i-a)+abs(j-b)+abs(tmp-c);
                ansa=i,ansb=j,ansc=tmp;
            }
            if(ans>abs(i-a)+abs(j-b)+abs(tmp+j-c))
            {
                ans=abs(i-a)+abs(j-b)+abs(tmp+j-c);
                ansa=i,ansb=j,ansc=tmp+j;
            }
        }
    }
    cout<<ans<<endl<<ansa<<" "<<ansb<<" "<<ansc<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
