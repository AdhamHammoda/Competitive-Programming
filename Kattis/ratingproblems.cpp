#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    double diff=n-k;
    double sum=0,a;
    for(int i=0;i<k;i++)cin>>a,sum+=a;
    cout<<fixed<<setprecision(4)<<(sum-diff*3)/n<<" "<<(sum+diff*3.0)/n<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
