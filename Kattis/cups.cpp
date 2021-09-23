#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<pair<long double,string>>s;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        string col="";
        long double num=0;
        if(a[0]>='0' && a[0]<='9')num=((long double)(stoll(a))/2.0),col=b;
        else num=stoll(b),col=a;
        s.insert({num,col});
    }
    for(auto x:s)cout<<x.second<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
