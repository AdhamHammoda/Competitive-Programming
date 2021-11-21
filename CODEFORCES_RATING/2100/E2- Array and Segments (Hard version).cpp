#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e5+5;
ll arr[N],n,m;
ll tree[4*N],lazy[4*N];
vector<ll> st[N],en[N];
ll l[400],r[400];
void build(ll v,ll tl,ll tr)
{
    if(tl==tr)
    {
        tree[v]=arr[tl];
        return;
    }
    ll mid=(tl+tr)/2;
    build(v*2,tl,mid);
    build(v*2+1,mid+1,tr);
    tree[v]=min(tree[v*2],tree[v*2+1]);
}
void updatelazy(ll v,ll tl,ll tr,ll ql,ll qr,ll new_val)
{
	if(lazy[v])
	{
		tree[v]+=lazy[v];
		if(tl!=tr)
		{
			lazy[v*2]+=lazy[v];
			lazy[v*2+1]+=lazy[v];
		}
		lazy[v]=0;
	}
	if(tr<ql||qr<tl) return;
	if(ql<=tl && tr<=qr)
	{
		tree[v]+=new_val;
		if(tl!=tr)
		{
			lazy[v*2]+=new_val;
			lazy[v*2+1]+=new_val;
		}
		return;
	}
	ll mid=(tl+tr)/2;
	updatelazy(v*2,tl,mid,ql,qr,new_val);
	updatelazy(v*2+1,mid+1,tr,ql,qr,new_val);
	tree[v]=min(tree[v*2],tree[v*2+1]);
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    build(1,0,n-1);
    for(int i=0;i<m;i++)
    {
        cin>>l[i]>>r[i];
        l[i]--;
        r[i]--;
        st[l[i]].push_back(r[i]);
        en[r[i]].push_back(l[i]);
        updatelazy(1,0,n-1,l[i],r[i],-1);
    }
    ll ans=0,ind=0;
    for(int i=0;i<n;i++)
    {
        for(ll x:st[i])
        {
            updatelazy(1,0,n-1,i,x,1);
        }
        if(arr[i]-tree[1]>ans)
        {
            ans=arr[i]-tree[1];
            ind=i;
        }
        for(ll x:en[i])
        {
            updatelazy(1,0,n-1,x,i,-1);
        }
    }
    cout<<ans<<endl;
    ll sz=0;
    for(int i=0;i<m;i++)
    {
        if(l[i]<=ind && ind<=r[i])continue;
        sz++;
    }
    cout<<sz<<endl;
    for(int i=0;i<m;i++)
    {
        if(l[i]<=ind && ind<=r[i])continue;
        cout<<i+1<<" ";
    }
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
