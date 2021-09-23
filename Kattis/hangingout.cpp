#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,q;
    cin>>n>>q;
    ll cur=0,sum=0;
    while(q--)
    {
        string s;
        ll a;
        cin>>s>>a;
        if(s=="leave")cur-=a;
        else
        {
            if(cur+a>n)sum++;
            else cur+=a;
        }
    }
    cout<<sum;
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
