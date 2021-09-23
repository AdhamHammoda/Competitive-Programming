#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    cout<<n<<":"<<endl;
    for(int i=2;i<=(n/2)+1;i++)
    {
        if(n%(2*i-1)==0 || !((n%(2*i-1))-i))cout<<i<<","<<i-1<<endl;
        if(n%i==0)cout<<i<<","<<i<<endl;
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
