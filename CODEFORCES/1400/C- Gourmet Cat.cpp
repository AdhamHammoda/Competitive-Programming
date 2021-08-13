#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll f,r,c;
    cin>>f>>r>>c;
    ll mn=min({f/3,c/2,r/2});
    ll ans=mn*7;
    f-=3*mn,r-=2*mn,c-=2*mn;
    map<ll,char>m;
    map<char,ll>am;
    m[1]=m[2]=m[5]='f';
    m[0]=m[3]='r';
    m[4]=m[6]='c';
    ll ans2=0;
    for(int i=0;i<7;i++)
    {
        am['f']=f,am['r']=r,am['c']=c;
        ll cur=0;
        for(int j=0;j<7;j++)
        {
            ll tod=(i+j)%7;
            if(am[m[tod]])cur++,am[m[tod]]--;
            else break;
        }
        ans2=max({ans2,cur});
    }
    cout<<ans+ans2;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
