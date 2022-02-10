#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll k;
    cin>>k;
    ll n=s.size();
    if(k>n*(n+1)/2)cout<<"No such line.",exit(0);
    multiset<pair<string,ll>>ms;
    for(int i=0;i<n;i++)
    {
        string r="";
        r.push_back(s[i]);
        ms.insert({r,i});
    }
    while(--k)
    {
        auto it=*ms.begin();
        ms.erase(ms.begin());
        if(it.second<n-1)
        {
            it.second++;
            it.first+=s[it.second];
            ms.insert(it);
        }
    }
    cout<<(*(ms.begin())).first;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
