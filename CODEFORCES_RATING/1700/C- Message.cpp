#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string a,b;
    cin>>a>>b;
    ll n=a.size(),m=b.size();
    ll ans=1e18;
    for(int i=1-m;i<n;i++)
    {
        ll c=0;
        for(int j=0;j<m;j++)
        {
            if(i+j>=n || i+j<0)
            {
                c++;
                continue;
            }
            if(a[i+j]!=b[j])c++;
        }
        ans=min(ans,c);
    }
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