#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
ll ans[1005][1005];
void test_case()
{
    ll n,k,d;
    cin>>n>>k>>d;
    ll tmpd=d,tmpn=n;
    while(tmpd--)tmpn=(tmpn-1)/k +1;
    if(tmpn>1)cout<<-1,exit(0);
    ll c=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<d;j++)ans[i][j]=ans[i-1][j];
        for(int j=0;j<d;j++)
        {
            ans[i][j]=(ans[i][j]+1)%k;
            if(ans[i][j])break;
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[j][i]+1<<" ";
        }
        cout<<endl;
    }
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