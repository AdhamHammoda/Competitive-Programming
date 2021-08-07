#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    deque<ll>dq;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
    }
    ll c=1;
    while(!dq.empty())
    {
        if(c%2)
        {
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
        else
        {
            cout<<dq.back()<<" ";
            dq.pop_back();
        }
        c++;
    }
    cout<<endl;
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
