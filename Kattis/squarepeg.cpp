#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll n,r;
    cin>>n>>r;
    if(2*n*n<=4*r*r)cout<<"fits";
    else cout<<"nope";
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
