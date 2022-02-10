#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    for(auto x:s)
    {
        x=tolower(x);
        if(x!='e' && x!='u' && x!='i' && x!='o' && x!='a' && x!='y')cout<<"."<<x;
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}