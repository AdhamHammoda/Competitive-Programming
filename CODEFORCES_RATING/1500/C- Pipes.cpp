#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    ll i=0,j=0;
    for(i=0;i<n;i++)
    {
        if(s[j][i]>='3')
        {
            if(s[!j][i]<'3')break;
            else j=!j;
        }
    }
    if(i==n && j==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
