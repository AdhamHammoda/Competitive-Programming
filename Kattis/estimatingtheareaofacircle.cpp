#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
long double r,m,c;
void test_case()
{
    long double area1=acos(-1)*r*r;
    long double area2=2*r*2*r*c/m;
    cout<<fixed<<setprecision(10)<<area1<<" "<<area2<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(cin>>r>>m>>c)
    {
        if(r==0 && m==0 && c==0.0)return 0;
        test_case();
    }
}
