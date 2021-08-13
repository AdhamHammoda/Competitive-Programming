#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
struct exam
{
    ll s,d,c,ind;
    exam(ll s,ll d,ll c,ll ind): s(s), d(d), c(c), ind(ind) {}
    bool operator < (exam &x)
    {
        return d < x.d;
    }
};
ll ans[300];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    vector<exam> v;
    for(int i=1;i<=m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v.push_back(exam(a,b,c,i));
    }
    sort(v.begin(),v.end());
    for(exam x:v)
    {
        ll tmp=x.c;
        for(int i=x.s;i<x.d && tmp;i++)
        {
            if(!ans[i])
            {
                ans[i]=x.ind;
                tmp--;
            }
        }
        if(tmp || ans[x.d])
        {
            cout<<-1;
            return;
        }
        ans[x.d]=m+1;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
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
