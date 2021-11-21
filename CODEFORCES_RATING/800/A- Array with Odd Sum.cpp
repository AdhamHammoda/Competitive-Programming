#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    map<ll,ll>m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        m[a%2]++;
    }
    if(m[1]%2 && !m[0])cout<<"YES"<<endl;
    else if(m[1] && m[0])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
