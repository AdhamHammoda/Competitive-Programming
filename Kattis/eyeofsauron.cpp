#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    ll p1=0,p2=s.size()-1;
    while(p1<=p2)
    {
        if(s[p1]=='(' && s[p2]==')')break;
        if(s[p1]!=s[p2])cout<<"fix",exit(0);
        p1++,p2--;
    }
    cout<<"correct";
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("b_basic.in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
