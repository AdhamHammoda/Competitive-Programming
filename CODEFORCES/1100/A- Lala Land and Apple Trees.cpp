#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 12:37 am
void test_case()
{
    ll n;
    cin>>n;
    set<pair<ll,ll>>pos;
    set<pair<ll,ll>>neg;    
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        a<0?neg.insert({-a,b}):pos.insert({a,b});
    }
    ll sum=0;
    bool p=true;
    if(pos.size()>=neg.size())p=false;
    while(pos.size() || neg.size())
    {
        if(p)
        {
            p=!p;
            if(!neg.size())
            {
                break;
            }
            else
            {
                auto x=*neg.begin();
                sum+=x.second;
                neg.erase(neg.begin());
            }
        }
        else
        {
            p=!p;
            if(!pos.size())
            {
                break;
            }
            else
            {
                auto x=*pos.begin();
                sum+=x.second;
                pos.erase(pos.begin());
            }
        }
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
