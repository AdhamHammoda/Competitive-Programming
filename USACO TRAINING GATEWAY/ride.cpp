/*
ID: allimel2
LANG: C++
PROG: ride
*/
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    ll ans1=1,ans2=1;
    for(auto x:s1)
    {
        ll tmp=x-'A'+1;
        ans1=(ans1*tmp)%47;
    }
    for(auto x:s2)
    {
        ll tmp=x-'A'+1;
        ans2=(ans2*tmp)%47;
    }
    ans1==ans2?cout<<"GO"<<endl:cout<<"STAY"<<endl;
}
int main()
{
    FIO
    ll t;
    freopen("ride.in","rt",stdin);
    freopen("ride.out","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
