#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
const ll N=1e6+5;
ll arr[N];
void test_case()
{
    cout<<arr[n]<<endl;
}
int main()
{
//    FIO
//    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    long double x=0.0;
    arr[0]=arr[1]=1;
    for(ll i=2;i<=1e6+1;i++)
    {
        x+=log10((long double)i);
        arr[i]=ceil(x);
    }
    while(cin>>n)
    {
        test_case();
    }
}
