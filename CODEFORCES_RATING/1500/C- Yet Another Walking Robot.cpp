#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void test_case()
{
    ll n;
    string s;
    cin>>n>>s;
    map<pair<ll,ll>,ll> vis;
    pair<ll,ll> p={0,0};
    vis[p]=0;
    ll lef=-1,ri=n;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')p.first--;
        if(s[i]=='R')p.first++;
        if(s[i]=='D')p.second--;
        if(s[i]=='U')p.second++;
        if(vis.count(p))
        {
            if(i-vis[p]<ri-lef)
            {
                lef=vis[p];
                ri=i;
            }
        }
        vis[p]=i+1;
    }
    lef==-1?cout<<-1<<endl:cout<<lef+1<<" "<<ri+1<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
