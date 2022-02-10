#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m,s;
    cin>>n>>m>>s;
    ll a=0,b=0,c=0,d=0;
    a=n%s,b=m%s,c=n/s,d=m/s;
    (a==0)?a=s:c++;
    (b==0)?b=s:d++;
    cout<<a*b*c*d;
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