#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string a,b;
    cin>>a>>b;
    string tmp=a.substr(a.size()-2,2);
    if(tmp=="ex")cout<<a<<b;
    else if(tmp[1]=='a' || tmp[1]=='i' ||tmp[1]=='o' || tmp[1]=='u' || tmp[1]=='e')
    {
        cout<<a.substr(0,a.size()-1)<<"ex"<<b;
    }
    else cout<<a<<"ex"<<b;
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
