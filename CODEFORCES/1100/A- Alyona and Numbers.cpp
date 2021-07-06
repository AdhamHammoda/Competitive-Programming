#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Combinatorics
/// 7-5-2021 , 5:58 am
void test_case()
{
    ll freq1[5]={0};
    ll freq2[5]={0};
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        freq1[i%5]++;
    }
    for(int i=1;i<=m;i++)
    {
        freq2[i%5]++;
    }
    ll ans1=freq1[1]*freq2[4]+freq1[4]*freq2[1];
    ll ans2=freq1[2]*freq2[3]+freq1[3]*freq2[2];
    ll ans3=freq1[0]*freq2[0];
    cout<<ans1+ans2+ans3;
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
