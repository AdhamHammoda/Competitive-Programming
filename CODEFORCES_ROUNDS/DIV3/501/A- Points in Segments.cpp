#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll q,n;
    cin>>q>>n;
    map<ll,bool>m;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)m[i]=1;
    }
    set<ll> s;
    for(int i=1;i<=n;i++)if(!m[i])s.insert(i);
    cout<<s.size()<<endl;
    for(auto x:s)cout<<x<<" ";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
