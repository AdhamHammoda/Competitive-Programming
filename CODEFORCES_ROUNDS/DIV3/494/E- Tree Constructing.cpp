#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=4e5+5;
ll deg[N];
set<pair<ll,ll>>ans;
ll dis1[N],dis2[N];
queue<ll>q;
void test_case()
{
    ll n,d,k;
    cin>>n>>d>>k;
    if(d>=n)
    {
        cout<<"NO";
        return;
    }
    for(int i=1;i<=d;i++)
    {
        deg[i]++,deg[i+1]++;
        dis1[i]=d+1-i;
        dis2[i]=i-1;
        ans.insert({i,i+1});
    }
    dis2[d+1]=d;
    ll lst=d+1;
    for(int i=2;i<=d;i++)q.push(i);
    while(lst<n && !q.empty())
    {
        ll u=q.front();
        q.pop();
        if(max(dis1[u],dis2[u])==d)continue;
        while(lst<n && deg[u]<k)
        {
            lst++;
            deg[u]++,deg[lst]++;
            ans.insert({u,lst});
            dis1[lst]=dis1[u]+1;
            dis2[lst]=dis2[u]+1;
            q.push(lst);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(deg[i]>k || lst!=n)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto x:ans)cout<<x.first<<" "<<x.second<<endl;

}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
