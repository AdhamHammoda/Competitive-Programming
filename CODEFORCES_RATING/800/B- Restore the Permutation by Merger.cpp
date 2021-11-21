#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll>s;
    vector<ll>v;
    for(int i=0;i<2*n;i++)
    {
        ll a;
        cin>>a;
        if(s.find(a)==s.end())
        {
            s.insert(a);
            v.push_back(a);
        }
    }
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
