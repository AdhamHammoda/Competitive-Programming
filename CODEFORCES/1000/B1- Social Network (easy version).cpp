#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    set<ll>s;
    deque<ll>dq;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(dq.size()==k)
        {
            if(s.find(a)==s.end())
            {
                s.erase(dq.back());
                dq.pop_back();
                dq.push_front(a);
                s.insert(a);
            }
        }
        else if(s.find(a)==s.end())
        {
            dq.push_front(a);
            s.insert(a);
        }
    }
    cout<<dq.size()<<endl;
    for(auto x:dq)cout<<x<<" ";
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
