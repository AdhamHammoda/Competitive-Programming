#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<=c;i++)
    {
        if((c-a*i)/b>0 && (c-a*i)%b==0)
        {
            cout<<"Yes";
            return;
        }
        else if((c-b*i)/a>0 && (c-b*i)%a==0)
        {
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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
