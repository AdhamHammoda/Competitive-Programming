#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll l,r,a;
    cin>>l>>r>>a;
    ll ans1=(r/a)*a;
    ans1=max(ans1,l);
    ans1=min(ans1,r);
    ll ans2=ans1*a;
    ans2=max(ans2,l);
    ans2=min(ans2,r);
    ll ans=0;
    ans=max( ans,(ans1/a)  + (ans1%a));
    ans=max( ans,(ans2/a)  + (ans2%a));
    if(ans1-1>=l)ans1--,ans=max( ans, (ans1/a)  + (ans1%a));
    if(ans2-1>=l)ans2--,ans=max( ans,(ans1/a)  + (ans1%a));
    cout<<ans<<endl;
}
int main()
{
//    freopen("word.in","rt",stdin);
//    freopen("word.out","wt",stdout);
    FIO
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}