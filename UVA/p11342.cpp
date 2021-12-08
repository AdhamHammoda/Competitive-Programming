#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
vector<ll> can[500005];
set<ll> squares;
void test_case()
{
    ll n;
    cin>>n;
    for(auto x:squares)
    {
        if(x>n)break;
        if(can[n-x].size()==2)
        {
            ll ans1=sqrt(x);
            vector<ll> ans;
            ans.push_back(ans1),ans.push_back(can[n-x][0]),ans.push_back(can[n-x][1]);
            sort(ans.begin(),ans.end());
            cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    for(int i=0;i<500;i++)squares.insert(i*i);
    for(int i=0;i<=250;i++)
    {
        for(int j=0;j<=250;j++)
        {
            can[i*i+j*j]={i,j};
        }
    }
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
