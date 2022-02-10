#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    string s;
    cin>>n>>k>>s;
    vector<ll> pos[10];
    for(int i=0;i<s.size();i++)pos[s[i]-'0'].push_back(i);
    set<pair<ll,string>>st;
    for(int i=0;i<=9;i++)
    {
        string r=s;
        ll sz=pos[i].size();
        ll tmpk=max(0LL,k-sz);
        ll moves=0;
        for(int j=1;j<=10;j++)
        {
            if(!tmpk)break;
            if(i+j<=9)
            {
                for(int u=0;u<pos[i+j].size();u++)
                {
                    if(!tmpk)break;
                    tmpk--;
                    r[pos[i+j][u]]='0'+i;
                    moves+=j;
                }
            }
            if(i-j>=0)
            {
                for(int u=pos[i-j].size()-1;u>=0;u--)
                {
                    if(!tmpk)break;
                    tmpk--;
                    r[pos[i-j][u]]='0'+i;
                    moves+=j;
                }
            }
        }
        st.insert({moves,r});
    }
    for(auto x:st)cout<<x.first<<endl<<x.second,exit(0);
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