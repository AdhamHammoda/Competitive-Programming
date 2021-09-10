#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    long double v0,theta,x1,h1,h2;
    cin>>v0>>theta>>x1>>h1>>h2;
    long double tim=0.0;
    tim=(long double)x1/(v0*cos(theta*acos(-1)/180.0));
    long double y=v0*sin(theta*acos(-1)/180.0)*tim-0.5*tim*tim*9.81;
    if(y>=h1+1 && y<=h2-1)cout<<"Safe"<<endl;
    else cout<<"Not Safe"<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
