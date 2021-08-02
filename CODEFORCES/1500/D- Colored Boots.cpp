#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    map<char,deque<ll>>m1;
    map<char,deque<ll>>m2;
    for(int i=0;i<n;i++)
    {
        m1[s1[i]].push_back(i+1);
        m2[s2[i]].push_back(i+1);
    }
    set<pair<ll,ll>>s;
    set<ll>st1,st2;
    for(char i='a';i<='z';i++)
    {
        ll mn=min(m1[i].size(),m2[i].size());
        for(int j=0;j<mn;j++)
        {
            ll a=m1[i].front();
            ll b=m2[i].front();
            s.insert({a,b});
            st1.insert(a);
            st2.insert(b);
            m1[i].pop_front();
            m2[i].pop_front();
        }
    }
    for(int i=0;i<n;i++)
    {
        if(m1['?'].size() && st2.find(i+1)==st2.end() && s2[i]!='?')
        {
            ll a=m1['?'].front();
            s.insert({a,i+1});
            st1.insert(a);
            st2.insert(i+1);
            m1['?'].pop_front();
            m2[s2[i]].pop_front();
        }
    }
    for(int i=0;i<n;i++)
    {
        if(m2['?'].size() && st1.find(i+1)==st1.end() && s1[i]!='?')
        {
            ll a=m2['?'].front();
            s.insert({i+1,a});
            st2.insert(a);
            st1.insert(i+1);
            m1[s1[i]].pop_front();
            m2['?'].pop_front();
        }
    }
    ll mn=min(m1['?'].size(),m2['?'].size());
    for(int i=0;i<mn;i++)
    {
            ll a=m1['?'].front();
            ll b=m2['?'].front();
            s.insert({a,b});
            st1.insert(a);
            st2.insert(b);
            m1['?'].pop_front();
            m2['?'].pop_front();
    }
    cout<<s.size()<<endl;
    for(auto x:s)cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}