#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    if(s[0]=='@' || s.back()=='@')cout<<"No solution",exit(0);
    vector<ll> pos;
    for(int i=0;i<s.size();i++)if(s[i]=='@')pos.push_back(i);
    for(int i=1;i<pos.size();i++)if(pos[i]-pos[i-1]<=2)cout<<"No solution",exit(0);
    if(!pos.size())cout<<"No solution",exit(0);
    string all="";
    all+=s.substr(0,pos[0]+2);
    for(int i=1;i<pos.size();i++)
    {
        all+=",";
        all+=s.substr(pos[i-1]+2,pos[i]-pos[i-1]);
    }
    all+=s.substr(pos.back()+2,s.size()-1-pos.back());
    cout<<all;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}