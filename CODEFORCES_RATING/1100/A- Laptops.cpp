#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    bool a=false;
    bool b=false;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        a+=(x>y);
        b+=(x<y);
    }
    (a && b)?cout<<"Happy Alex":cout<<"Poor Alex";
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