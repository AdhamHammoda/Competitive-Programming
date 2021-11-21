#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    multiset<pair<ll,ll>>ms;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        ms.insert({a,b});
    }
    string r="";
    ll prevx=0,prevy=0;
    for(auto x:ms)
    {
        if(x.first-prevx<0 || x.second-prevy<0)
        {
            cout<<"NO"<<endl;
            return;
        }
        while(prevx!=x.first)
        {
            prevx++;
            r.push_back('R');
        }
        while(prevy!=x.second)
        {
            prevy++;
            r.push_back('U');
        }
    }
    cout<<"YES"<<endl<<r<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
