#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>factors;
        ll diff=y-x;
        ll m=diff;
        for(int i=1;i*i<=m;i++)
        {
            if(m%i==0)
            {
                factors.push_back(i);
                if(i!=m/i)factors.push_back(m/i);
            }
        }
        sort(factors.rbegin(),factors.rend());
        ll d=0;
        set<ll>s;
        bool tr=false;
        for(int j=0;j<factors.size();j++)
        {
            s.clear();
            d=factors[j];
            for(int u=0;u<n;u++)
            {
                if(y-d*u<=0)break;
                s.insert(y-d*u);
            }
            if(s.size()==n && s.find(x)!=s.end())
            {
                tr=true;
                for(auto r:s)cout<<r<<" ";
                cout<<endl;
                break;
            }
        }
        if(!tr)
        {
            reverse(factors.begin(),factors.end());
            for(int j=0;j<factors.size();j++)
            {
                s.clear();
                d=factors[j];
                for(int u=0;u<n;u++)
                {
                    if(y-d*u<=0)break;
                    s.insert(y-d*u);
                }
                ll e=s.size();
                for(int j=1;j<=n-e;j++)
                {
                    s.insert(y+d*j);
                }
                if(s.size()==n && s.find(x)!=s.end())
                {
                    for(auto r:s)cout<<r<<" ";
                    cout<<endl;
                    break;
                }
            }
        }
    }
}