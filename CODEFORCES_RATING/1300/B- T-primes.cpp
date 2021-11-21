#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll sq=sqrt(n);
    bool tr=false;
    tr+=(sq*sq==n);
    for(ll i=2;i*i<=sq;i++)
    {
        if(sq%i==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<(tr && n!=1?"YES":"NO")<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
