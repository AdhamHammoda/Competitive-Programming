#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=n/3;
    map<char,set<ll>>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]].insert(i);
    }
    while(m['0'].size()<ans)
    {
        if(m['2'].size()>ans)
        {
            s[*m['2'].begin()]='0';
            m['0'].insert(*m['2'].begin());
            m['2'].erase(*m['2'].begin());
            continue;
        }
        if(m['1'].size()>ans)
        {
            s[*m['1'].begin()]='0';
            m['0'].insert(*m['1'].begin());
            m['1'].erase(*m['1'].begin());
            continue;
        }
    }
    while(m['2'].size()<ans)
    {
        if(m['0'].size()>ans)
        {
            s[*m['0'].rbegin()]='2';
            m['2'].insert(*m['0'].rbegin());
            m['0'].erase(*m['0'].rbegin());
            continue;
        }
        if(m['1'].size()>ans)
        {
            s[*m['1'].rbegin()]='2';
            m['2'].insert(*m['1'].rbegin());
            m['1'].erase(*m['1'].rbegin());
            continue;
        }
    }
    while(m['1'].size()<ans)
    {
        if(m['2'].size()>ans)
        {
            s[*m['2'].begin()]='1';
            m['1'].insert(*m['2'].begin());
            m['2'].erase(*m['2'].begin());
            continue;
        }
        if(m['0'].size()>ans)
        {
            s[*m['0'].rbegin()]='1';
            m['1'].insert(*m['0'].rbegin());
            m['0'].erase(*m['0'].rbegin());
            continue;
        }
    }
    cout<<s;
}
int main()
{
//    FIO
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
