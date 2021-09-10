#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=3*a+b*2+c;
    if(ans>=8)cout<<"Province or ";
    else if(ans>=5)cout<<"Duchy or ";
    else if(ans>=2)cout<<"Estate or ";
    if(ans>=6)cout<<"Gold";
    else if(ans>=3)cout<<"Silver";
    else cout<<"Copper";
}
int main()
{
//    FIO
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
