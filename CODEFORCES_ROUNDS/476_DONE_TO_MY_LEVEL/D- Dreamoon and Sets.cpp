#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    cout<<k*(6*n-1)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<k*(6*i+1)<<" "<<k*(6*i+2)<<" "<<k*(6*i+3)<<" "<<k*(6*i+5)<<endl;
    }
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
