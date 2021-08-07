#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    if((n/2)%2)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        ll sum=0,sum2=0;
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
            sum+=i;
        }
        for(int i=1;i<n-1;i+=2)
        {
            cout<<i<<" ";
            sum2+=i;
        }
        cout<<sum-sum2<<endl;
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
