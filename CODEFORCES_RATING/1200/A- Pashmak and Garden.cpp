#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c)cout<<a+abs(b-d)<<" "<<b<<" "<<a+abs(b-d)<<" "<<d;
    else if(b==d)cout<<a<<" "<<b+abs(a-c)<<" "<<c<<" "<<b+abs(a-c);
    else
    {
        if(abs(a-c)!=abs(b-d))cout<<-1;
        else cout<<a<<" "<<d<<" "<<c<<" "<<b;
    }
}
int main()
{
//    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}