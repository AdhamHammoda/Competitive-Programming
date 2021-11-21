#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    ll j=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[j] && j<s2.size())j++;
    }
    if(j==s2.size())
    {
        cout<<"automaton";
        return;
    }
    map<char,ll>m1,m2;
    for(auto x:s1)m1[x]++;
    for(auto x:s2)m2[x]++;
    for(auto x:m2)
    {
        if(m1[x.first]<x.second)
        {
            cout<<"need tree";
            return;
        }
    }
    if(s1.size()>s2.size())
    {
        cout<<"both";
    }
    else cout<<"array";
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
