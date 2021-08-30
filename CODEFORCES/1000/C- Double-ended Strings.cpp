#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void test_case()
{
    string a,b;
    cin>>a>>b;
    ll ans=0;
    for(int i=0;i<a.size();i++)
    {
        ll c=0;
        ll x=i;
        for(int j=0;j<b.size();j++)
        {
            while(a[x]==b[j] && x<a.size())
            {
                c++;
                x++;
                j++;
            }
            x++;
            ans=max(ans,c);
            c=0;
        }
    }
    ll ans2=0;
    for(int i=0;i<b.size();i++)
    {
        ll c=0;
        ll x=i;
        for(int j=0;j<a.size();j++)
        {
            while(b[x]==a[j] && x<b.size())
            {
                c++;
                x++;
                j++;
            }
            ans2=max(ans2,c);
            c=0;
            x++;
        }
    }
    ll mx=max(ans2,ans);
    cout<<a.size()-mx+b.size()-mx<<endl;
}
int main()
{
//    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
