#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            if(b+i*a==d+j*c)
            {
                cout<<b+i*a;
                return;
            }
        }
    }
    cout<<-1;
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
