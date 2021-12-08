#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=4e18;
    for(int i=-1;i<=1;i++)
    for(int j=-1;j<=1;j++)
    for(int k=-1;k<=1;k++)
    ans=min(ans,abs((a+i)-(b+j))+abs((a+i)-(c+k))+abs((c+k)-(b+j)));
    cout<<ans<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
