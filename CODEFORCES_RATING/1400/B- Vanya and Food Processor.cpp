#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k,h;
    cin>>n>>h>>k;
    ll sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(sum+x<=h)sum+=x;
        else c++,sum=x;
        c+=sum/k;
        sum%=k;
    }
    c+=sum/k;
    sum%=k;
    cout<<c+(sum>0);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}