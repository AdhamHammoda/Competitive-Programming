#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        if(sum+5*i>4*60-k)
        {
            cout<<i-1;
            return;
        }
        sum+=5*i;
    }
    cout<<i-1;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
