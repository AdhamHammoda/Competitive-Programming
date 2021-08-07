#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(a<b)
    {
        cout<<1+!((b-a)%2)<<endl;
    }
    else cout<<1+((a-b)%2)<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}