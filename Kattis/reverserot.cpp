#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll a;
void test_case()
{
    map<char,ll>mp;
    map<ll,char>toc;
    for(char a='A';a<='Z';a++)mp[a]=a-'A',toc[a-'A']=a;
    mp['_']=26;
    mp['.']=27;
    toc[26]='_';
    toc[27]='.';
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(auto x:s)
    {
        char c=toc[(mp[x]+a)%28];
        cout<<c;
    }
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>a)
    {
        if(!a)return 0;
        test_case();
    }
}
