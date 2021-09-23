#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    deque<ll>dq1,dq2;
    ll n,m;
    cin>>n>>m;
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
    sort(dq1.begin(),dq1.end());
    sort(dq2.begin(),dq2.end());
    while(dq1.size() && dq2.size())
    {
        ll mn1=dq1.front();
        ll mn2=dq2.front();
        if(mn1<mn2)dq1.pop_front();
        else dq2.pop_front();
    }
    if(dq1.size()==dq2.size())cout<<"uncertain"<<endl;
    else if(dq1.size()>dq2.size())cout<<"Godzilla"<<endl;
    else cout<<"MechaGodzilla"<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
