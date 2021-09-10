#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll mni=0,mn=0;
    for(int i=1;i<=5;i++)
    {
        ll sum=0;
        for(int j=1;j<=4;j++)
        {
            ll a;
            cin>>a;
            sum+=a;
        }
        if(sum>mn)
        {
            mn=sum;
            mni=i;
        }
    }
    cout<<mni<<" "<<mn;
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
