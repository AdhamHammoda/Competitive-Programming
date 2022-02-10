#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string a,b;
    cin>>a>>b;
    ll j=0;
    for(int i=0;i<b.size();i++)j+=(b[i]==a[j]);
    cout<<j+1;
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