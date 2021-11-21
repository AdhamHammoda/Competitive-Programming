#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-14-2021 , 4:27 pm
void test_case()
{
    double x[5]={500,1000,1500,2000,2500};
    double m[5],w[5];

    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>w[i];
    }
    double s,uns;
    cin>>s>>uns;
    double ans=0.0;
    for(int i=0;i<5;i++)
    {
        ans+=max(0.3 * x[i],(1- m[i] /250.0)*x[i]  - 50 * w[i]);
    }
    ans+=s*100.0;
    ans-=uns*50.0;
    cout<<ans;
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
