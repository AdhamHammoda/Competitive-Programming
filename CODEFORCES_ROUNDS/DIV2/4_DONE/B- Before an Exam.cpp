#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,sumtime;
    cin>>n>>sumtime;
    pair<ll,ll> rang[n];
    ll mn=0,mx=0;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>rang[i].first>>rang[i].second;
        mn+=rang[i].first;
        mx+=rang[i].second;
        v[i]=rang[i].first;
    }
    if(sumtime<mn || sumtime>mx)cout<<"NO",exit(0);
    ll diff=sumtime-mn;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        ll ans=min(diff,rang[i].second-rang[i].first);
        diff-=ans;
        v[i]+=ans;
        cout<<v[i]<<" ";
    }

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}