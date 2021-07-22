#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
map<char,set<ll>>m;
string s1,s2;
bool can;
void rec(ll s1idx,ll s2idx)
{
    cout<<s1idx<<" "<<s2idx<<endl;
    if(s2idx==s2.size())
    {
        can=true;
        return;
    }
    for(auto y:m[s2idx])
    {
        if(y==s1idx+1)
        {
            rec(y+1,s2idx+1);
        }
        if(y==s1idx-1)
        {
           rec(y-1,s2idx+1);
        }
        return;
    }
}
void test_case()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        m[s1[i]].insert(i);
    }
    rec(*m[s2[0]].begin(),0);
    can?cout<<"YES":cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
