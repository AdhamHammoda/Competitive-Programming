#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k,sum;
    cin>>n>>k>>sum;
    if((n-1)*k<sum || sum<k)cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        vector<ll> v;
        v.push_back(1);
        while(k>0)
        {
            ll tmp=min(n-1,sum-(k-1));
            v.push_back((v.back()-tmp>0?v.back()-tmp:v.back()+tmp));
            k--;
            sum-=tmp;
        }
        for(int i=1;i<v.size();i++)cout<<v[i]<<" ";
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
