#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll st,en,n;
    cin>>st>>en>>n;
    ll d[n+1],b[n],c[n];
    for(int i=0;i<n+1;i++)cin>>d[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++)
    {
        st+=d[i];
        ll mod=st%c[i];
        if(mod)st+=c[i]-mod;
    }
    st+=d[n];
    st>en?cout<<"no":cout<<"yes";
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
