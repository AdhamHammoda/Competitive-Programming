#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 3:11 pm
void test_case()
{
    ll n;
    cin>>n;
    vector<bool> v(n,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[j]=!v[j];
        }
    }
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        c+=v[i];
    }
    cout<<c<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
