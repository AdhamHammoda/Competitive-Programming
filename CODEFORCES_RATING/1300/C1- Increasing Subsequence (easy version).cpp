#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    deque<ll> dq;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
    }
    ll mx=0;
    vector<ll> v;
    string mv="";
    while(!dq.empty())
    {
        ll a=dq.front();
        ll b=dq.back();
        if(!v.size())
        {
            if(a<=b)
            {
                v.push_back(a);
                mv.push_back('L');
                dq.pop_front();
            }
            else
            {
                v.push_back(b);
                mv.push_back('R');
                dq.pop_back();
            }
            mx=v[v.size()-1];
            continue;
        }
        mx=v[v.size()-1];
        ll mn=min(a,b);
        ll mxx=max(a,b);
        if(mn>=mx)
        {
            if(mn==a)
            {
                v.push_back(a);
                mv.push_back('L');
                dq.pop_front();
            }
            else
            {
                v.push_back(b);
                mv.push_back('R');
                dq.pop_back();
            }
        }
        else if(mxx>=mx)
        {
            if(mxx==a)
            {
                v.push_back(a);
                mv.push_back('L');
                dq.pop_front();
            }
            else
            {
                v.push_back(b);
                mv.push_back('R');
                dq.pop_back();
            }
        }
        else break;
    }
    cout<<mv.size()<<endl<<mv;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}