#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=4e5+5;
const ll diff=2e5+5;
vector<pair<ll,ll>>nump[N],numn[N],r[N],c[N];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    map<pair<ll,ll>,ll>posp,posn,posr,posc;
    vector<pair<ll,ll>>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i].first>>v[i].second;
        r[v[i].first].push_back(v[i]);
        c[v[i].second].push_back(v[i]);
        numn[v[i].first-v[i].second+n].push_back(v[i]);
        nump[v[i].first+v[i].second].push_back(v[i]);
    }
    for(int i=0;i<2*n;i++)
    {
        if(c[i].size())sort(c[i].begin(),c[i].end());
        if(r[i].size())sort(r[i].begin(),r[i].end());
        if(nump[i].size())sort(nump[i].begin(),nump[i].end());
        if(numn[i].size())sort(numn[i].begin(),numn[i].end());
        if(c[i].size())for(int j=0;j<c[i].size();j++)posc[c[i][j]]=j;
        if(r[i].size())for(int j=0;j<r[i].size();j++)posr[r[i][j]]=j;
        if(nump[i].size())for(int j=0;j<nump[i].size();j++)posp[nump[i][j]]=j;
        if(numn[i].size())for(int j=0;j<numn[i].size();j++)posn[numn[i][j]]=j;
    }
    vector<ll> ans(9,0);
    for(int i=0;i<m;i++)
    {
        ll all=0,x=v[i].first,y=v[i].second;
        ll a1=0,a2=0,a3=0,a4=0;
        a1=posr[{x,y}],a2=posc[{x,y}],a3=posp[{x,y}],a4=posn[{x,y}];
        all+=(r[x].size()>1)*((a1>0)+(a1<r[x].size()-1));
        all+=(c[y].size()>1)*((a2>0)+(a2<c[y].size()-1));
        all+=(nump[x+y].size()>1)*((a3>0)+(a3<nump[x+y].size()-1));
        all+=(numn[x-y+n].size()>1)*((a4>0)+(a4<numn[x-y+n].size()-1));
        if(all<9)ans[all]++;
    }
    for(int i=0;i<9;i++)cout<<ans[i]<<" ";
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}