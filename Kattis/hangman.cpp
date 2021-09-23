#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    set<char>st;
    for(auto x:s)st.insert(x);
    string g;
    cin>>g;
    ll c=0;
    for(int i=0;i<g.size();i++)
    {
        if(!st.size())
        {
            cout<<"WIN";
            return;
        }
        if(c>=10)
        {
            cout<<"LOSE";
            return;
        }
        if(st.find(g[i])!=st.end())st.erase(g[i]);
        else c++;
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
