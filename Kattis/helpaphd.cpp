#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    if(s=="P=NP")cout<<"skipped"<<endl;
    else
    {
        stringstream is(s);
        ll a;
        is>>a;
        char b;
        is>>b;
        ll c;
        is>>c;
        cout<<a+c<<endl;
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
