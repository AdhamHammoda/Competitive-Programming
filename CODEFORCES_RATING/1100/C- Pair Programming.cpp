#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 1:09 pm
void test_case()
{
    ll k,n,m;
    cin>>k>>n>>m;
    deque<ll>dq1;
    deque<ll>dq2;
    deque<ll>ans;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        dq1.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        dq2.push_back(a);
    }
    bool can=true;
    while(!dq1.empty() || !dq2.empty())
    {
        ll a=1e8,b=1e8,mn=1e8;
        if(dq1.size())a=dq1.front();
        if(dq2.size())b=dq2.front();
        mn=min(a,b);
        if(mn==0)k++;
        if(mn>k && mn!=1e8)
        {
            can=false;
            break;
        }
        if(mn!=1e8)ans.push_back(mn);
        if(dq1.size() && mn==dq1.front())dq1.pop_front();
        else if(dq2.size() && mn==dq2.front())dq2.pop_front();
    }
    if(can)for(auto x:ans)cout<<x<<" ";
    else cout<<-1;
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
