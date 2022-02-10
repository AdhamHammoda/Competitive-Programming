#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char,ll>pos;
    ll ind=0;
    for(auto x:s)pos[x]=ind++;
    char a;
    cin>>a;
    string r;
    cin>>r;
    for(auto x:r)
    {
        if(a=='R')cout<<s[pos[x]-1];
        else cout<<s[pos[x]+1];
    }

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}