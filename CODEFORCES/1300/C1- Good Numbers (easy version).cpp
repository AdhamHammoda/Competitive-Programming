#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<ll> v={1};
void test_case()
{
    ll n;
    cin>>n;
    ll it=lower_bound(v.begin(),v.end(),n)-v.begin();
    cout<<v[it]<<endl;
}
int main()
{
    for(int i=0;i<1e5;i++)
    {
        v.push_back(v[i]*3);
        v.push_back(v[i]*3 + 1);
    }
    sort(v.begin(),v.end());
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
