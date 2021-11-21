#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll freq[64],powers[64];
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    for(int i=63;i>=0;i--)
    {
        ll tmp=min((n/powers[i]),freq[i]);
        n-=tmp*powers[i];
        c+=tmp;
    }
    cout<<(n?-1:c)<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
    ll n;
    cin>>n>>t;
    for(int i=0;i<64;i++)powers[i]=(1LL<<i);
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        a=log2(a);
        freq[a]++;
    }
    while(t--)
    {
        test_case();
    }
}
