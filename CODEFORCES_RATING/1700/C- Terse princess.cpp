#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i!=1)
        {
            if(b)b--,v.push_back(sum+1);
            else if(a && v.size()>1)a--,v.push_back(v.back()+1);
            else v.push_back(v.back());
        }
        else v.push_back(i);
        sum+=v[i-1];
    }
    if(a || b)cout<<-1;
    else for(auto x:v)cout<<x<<" ";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}