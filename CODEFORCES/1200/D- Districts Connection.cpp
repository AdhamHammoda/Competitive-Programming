#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>par;
    set<ll>s;
    map<ll,set<ll>>ind;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
        par[i+1]=a;
        ind[a].insert(i+1);
    }
    if(s.size()==1)cout<<"NO"<<endl;
    else
    {
        ll ind1=*ind[*s.begin()].begin();
        ll ind2=*ind[*s.rbegin()].begin();
        cout<<"YES"<<endl;
        cout<<ind1<<" "<<ind2<<endl;
        for(int i=1;i<=n;i++)
        {
            if(i==ind1 || i==ind2)continue;
            if(par[i]==*s.begin())cout<<ind2<<" "<<i<<endl;
            else cout<<ind1<<" "<<i<<endl;
        }
    }
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
