#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll c=0;
    for(int i=1;i<=d;i++)
    {
        c+=(i%k==0 || i%l==0 || i%m==0 || i%n==0);
    }
    cout<<c;
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