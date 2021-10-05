#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll k=0;
    ll n;
    cin>>n;
    priority_queue<pair<ll,ll>>pq;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        pq.push({b,a});
    }
    ll c=0;
    while(!pq.empty())
    {
        auto x=pq.top();
        c+=x.second;
        k+=x.first;
        if(!k)
        {
            cout<<c;
            return;
        }
        k--;
        pq.pop();
    }
    cout<<c;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
