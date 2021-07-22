#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Greedy
/// 7-22-2021 , 4:22 pm
void test_case()
{
    ll n;
    cin>>n;
    double x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    ll m;
    cin>>m;
    double y[m];
    for(int i=0;i<m;i++)cin>>y[i];
    ll k;
    cin>>k;
    double z[k];
    for(int i=0;i<k;i++)cin>>z[i];
    double a,b;
    cin>>a>>b;
    sort(x,x+n);
    sort(y,y+m);
    sort(z,z+k);
    double r1=x[n-1],p1=y[m-1],p2=z[0];
    double ans=sqrt((a/b + p1/p2) * (p2/(p1*r1*r1)));
    cout<<fixed<<setprecision(10)<<1/ans;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
