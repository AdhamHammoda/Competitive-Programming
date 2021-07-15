#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 4:26 pm
ll freq[10000];
void test_case()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll m;
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                ll r=b[j]/a[i];
                s.insert(r);
                freq[r]++;
            }
        }
    }
    cout<<freq[*s.rbegin()];
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
