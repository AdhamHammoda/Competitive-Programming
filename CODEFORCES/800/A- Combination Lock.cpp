#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 8:19 pm
void test_case()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll diff=abs(s1[i]-s2[i]);
        ll mn=min(diff,10-diff);
        sum+=mn;
    }
    cout<<sum;
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
