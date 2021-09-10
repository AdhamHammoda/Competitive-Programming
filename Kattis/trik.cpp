#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll a=1,b=0,c=0;
    for(auto x:s)
    {
        if(x=='A')
        {
            ll temp=a;
            a=b;
            b=temp;
        }
        else if(x=='B')
        {
            ll temp=b;
            b=c;
            c=temp;
        }
        else
        {
            ll temp=c;
            c=a;
            a=temp;
        }
    }
    if(a==1)cout<<1;
    else if(b==1)cout<<2;
    else cout<<3;
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
