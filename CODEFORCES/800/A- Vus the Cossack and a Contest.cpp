#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    min(b,c)>=a?cout<<"Yes":cout<<"No";
}
int main()
{
//    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
