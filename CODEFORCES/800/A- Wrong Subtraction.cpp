#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=1e5+5, M=17+5, MOD=998244353, OO=0x3f3f3f3f;
long double const ESP=1e-11;

int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
long long n,k;
cin>>n>>k;
while(k--)
{
    if(n%10==0)
    {
        n/=10;
    }
    else
    {
        n--;
    }
}
    cout<<n;
}