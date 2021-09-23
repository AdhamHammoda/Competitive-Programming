#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
string s;
void test_case()
{
    string r="";
    ll c=0;
    long double sum=0.0;
    stringstream is(s);
    string tmp;
    while(is>>tmp)
    {
        if(tmp[0]<='Z' && tmp[0]>='A')r+=tmp,r+=" ";
        else  sum+=stold(tmp),c++;
    }
    cout<<fixed<<setprecision(10)<<sum/(long double)c<<" ";
    cout<<r<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(getline(cin,s))
    {
        test_case();
    }
}
