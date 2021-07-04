#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 8:34 pm
void test_case()
{
    string s;
    cin>>s;
    string r="";
    vector<string> v;
    for(int i=0;i<s.size()+1;i++)
    {
        if((s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') || i==s.size())
        {
            if(r!="")v.push_back(r);
            r="";
            i+=2;
        }
        else
        {
            r.push_back(s[i]);
        }
    }
    for(auto x:v)cout<<x<<" ";
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
