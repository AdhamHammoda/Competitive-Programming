#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    double a,b;
    cin>>a>>b;
    set<pair<double,double>>s;
    bool v=false;
    for(int i=0;i<n;i++)
    {
        double x,y;
        cin>>x>>y;
        if(x==a)v=true;
        else
        {
            double sl=(y-b)/(x-a);
            double inc=y-(sl*x);
            s.insert({sl,inc});
        }
    }
    cout<<s.size()+v;
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
