#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll tmp=(n/2)+(n%2);
    k=((tmp+k-1)/k)*k;
    if(k>n)cout<<-1;
    else cout<<k;
}
int main()
{
//    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
