#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll arr[4]={0};
    ll a,b,c,d;
    for(auto &x:arr)cin>>x;
    string s;
    cin>>s;
    ll sum=0;
    for(auto x:s)sum+=arr[x-'0'-1];
    cout<<sum;
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