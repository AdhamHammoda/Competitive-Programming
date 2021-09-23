#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll c=0;
void test_case()
{
    set<char>s;
    for(char a='a';a<='z';a++)s.insert(a);
    string ss;
    getline(cin,ss);
    c++;
    if(c==1)return;
    for(auto x:ss)
    {
        if(s.find(tolower(x))!=s.end())s.erase(tolower(x));
    }
    if(s.size())
    {
        cout<<"missing ";
        for(auto x:s)cout<<x;
        cout<<endl;
        return;
    }
    cout<<"pangram"<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
    t++;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
