#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
set<string> s;
ll n,k;
void rec(string r,ll tak)
{
    if(r.size()==n)
    {
        if(!tak)cout<<r<<endl;
        return;
    }
    rec(r+"0",tak);
    rec(r+"1",tak-1);
}
void test_case()
{
    cin>>n>>k;
    rec("",k);
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
        if(t)cout<<endl;
    }
}
