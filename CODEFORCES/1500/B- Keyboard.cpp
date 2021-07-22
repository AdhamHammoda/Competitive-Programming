#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-20-2021 , 6:33 pm
void test_case()
{
    map<char,set<pair<ll,ll>>>mp;
    map<char,ll>ans;
    ll n,m;
    cin>>n>>m;
    double x;
    cin>>x;
    char grid[n][m];
    set<char>all;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            mp[grid[i][j]].insert({i,j});
            all.insert(grid[i][j]);
        }
    }
    for(int i=0;i<26;i++)
    {
        ans['A'+i]=-1;
    }
    ll q;
    cin>>q;
    string s;
    cin>>s;
    for(auto a:all)
    {
        if(a=='S')continue;
        ll mn=1e9;
        for(auto x:mp[a])
        {
            for(auto y:mp['S'])
            {
                ll dis1=abs(x.first-y.first);
                ll dis2=abs(x.second-y.second);
                ll dist=ceil(sqrt(dis1*dis1+dis2*dis2));
                mn=min(dist,mn);
            }
        }
        ans[a]=mn;
    }
    ll sum=0;
    bool entr=false;
    for(int i=0;i<q;i++)
    {
        if(all.find(tolower(s[i]))==all.end())
        {
            cout<<-1;
            return;
        }
        else entr=true;
        if(isupper(s[i]) && mp['S'].size())
        {
            sum+=(ans[tolower(s[i])]>x);
        }
        else if(isupper(s[i]))
        {
            cout<<-1;
            return;
        }
    }
    entr?cout<<sum:cout<<-1;
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
