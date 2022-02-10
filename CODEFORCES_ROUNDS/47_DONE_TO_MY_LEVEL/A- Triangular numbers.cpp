#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    map<ll,ll>m;
    for(int i=1;i<=500;i++)m[i*(i+1)/2]++;
    ll n;
    cin>>n;
    cout<<(m[n]?"YES":"NO");
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}