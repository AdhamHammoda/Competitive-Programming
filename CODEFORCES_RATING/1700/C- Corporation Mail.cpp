#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    vector<string> v;
    ll ans=0;
    string tmp="";
    for(auto x:s)
    {
        if(x!='.' && x!=',' && x!=':')tmp+=x;
        else if(tmp!="")
        {
            for(auto y:v)ans+=(y==tmp);
            v.push_back(tmp);
            tmp="";
        }
        if(x=='.' && v.size())v.pop_back();
    }
    cout<<ans;
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