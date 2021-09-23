#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll c=1;
    bool tr=false;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a!=c)
        {
            tr=true;
            for(int i=c;i<a;i++)cout<<i<<endl;
        }
        c=a+1;
    }
    if(!tr)cout<<"good job";
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
