#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 8:52 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            i==j?cout<<k<<" ":cout<<0<<" ";
        }
        cout<<endl;
    }
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
