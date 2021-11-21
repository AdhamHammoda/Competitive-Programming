#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll a,b,c,d,e,x;
   cin>>a>>b>>c>>d>>e>>x;
   char gr='A';
   gr+=0*(x>=a)+1*(x>=b&&x<a)+2*(x>=c&&x<b)+3*(x>=d&&x<c)+4*(x>=e&&x<d)+5*(x<e);
   cout<<gr;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
