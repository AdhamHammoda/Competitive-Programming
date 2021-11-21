#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    vector<pair<ll,string>>v(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v[i]={s.size(),s};
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i].second.find(v[i-1].second)==string::npos)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto x:v)cout<<x.second<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
