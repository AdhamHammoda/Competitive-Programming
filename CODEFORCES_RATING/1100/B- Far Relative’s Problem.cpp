#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
ll summ[500],sumf[500];
void test_case()
{
    ll n;
    cin>>n;
    while(n--)
    {
        char a;
        cin>>a;
        ll x,y;
        cin>>x>>y;
        if(a=='F')sumf[x]++,sumf[y+1]--;
        else summ[x]++,summ[y+1]--;
    }
    for(int i=1;i<500;i++)sumf[i]+=sumf[i-1],summ[i]+=summ[i-1];
    ll mx=0;
    for(int i=1;i<500;i++)
    {
        mx=max(mx,2*min(summ[i],sumf[i]));
    }
    cout<<mx;
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}