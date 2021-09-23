#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll a,b;
void test_case()
{
    cout<<a/b<<" "<<a-b*(a/b)<<" / "<<b<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>a>>b)
    {
        if(!a && !b)return 0;
        test_case();
    }
}
