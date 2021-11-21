#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll a,b;
    cin>>a>>b;
    while(a && b)
    {
        if(a>=2*b)
        {
            a=a-2*b*(a/(2*b));
            continue;
        }
        else if(b>=2*a)
        {
            b=b-2*a*(b/(2*a));
            continue;
        }
        break;
    }
    cout<<a<<" "<<b;
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
