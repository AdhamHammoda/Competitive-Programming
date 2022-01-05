#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    set<char> even,odd;
    map<char,ll>m;
    for(auto x:s)m[x]++;
    for(char a='a';a<='z';a++)
    {
        if(!m[a])continue;
        m[a]%2?odd.insert(a):even.insert(a);
    }
    while(odd.size()>=2)
    {
        auto x=*odd.begin(),y=*odd.rbegin();
        m[x]++,m[y]--;
        odd.erase(x),odd.erase(y);
        even.insert(x),even.insert(y);
    }
    string ans,revans;
    for(char x='a';x<='z';x++)
    {
        if(even.find(x)!=even.end())
        {
            for(int i=1;i<=m[x]/2;i++)ans+=x,revans+=x;
            even.erase(x);
        }
        else for(int i=1;i<=m[x]/2;i++)ans+=x,revans+=x;
    }
    if(odd.size())ans+=(*odd.begin());
    reverse(revans.begin(),revans.end());
    cout<<ans<<revans;
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
