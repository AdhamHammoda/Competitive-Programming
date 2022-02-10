#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    map<char,ll> freq;
    for(auto x:s)freq[x]++;
    set<pair<char,ll>> odd,even;
    for(auto x:s)
    {
        if(freq[x]%2)odd.insert({freq[x],x});
        else even.insert({freq[x],x});
    }
    if(odd.size()<=1 || odd.size()%2)cout<<"First";
    else cout<<"Second";
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