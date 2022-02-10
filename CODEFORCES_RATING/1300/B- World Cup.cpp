#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll mn=1e18,ind=-1;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        ll tmp=ceil((long double)max(x-i+1,0LL)/n);
        if(tmp<mn)mn=tmp,ind=i;
    }
    cout<<ind;

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}