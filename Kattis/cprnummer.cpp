#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string r="4327654321";
    ll j=0;
    string s;
    cin>>s;
    ll sum=0;
    for(auto x:s)
    {
        if(x=='-')continue;
        sum+=(r[j]-'0')*(x-'0');
        j++;
    }
    cout<<((sum%11)==0);
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
