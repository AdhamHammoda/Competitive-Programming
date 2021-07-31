#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string s;
ll n;
pair<ll,string> func(char a,char b,char c)
{
    ll d=0;
    string r="";
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]!=a)d++;
        if(i%3==1 && s[i]!=b)d++;
        if(i%3==2 && s[i]!=c)d++;
        if(i%3==0)r.push_back(a);
        if(i%3==1)r.push_back(b);
        if(i%3==2)r.push_back(c);
    }
    return {d,r};
}
void test_case()
{
    cin>>n;
    cin>>s;
    set<pair<ll,string>>ms;
    ms.insert(func('R','G','B'));
    ms.insert(func('R','B','G'));
    ms.insert(func('G','R','B'));
    ms.insert(func('G','B','R'));
    ms.insert(func('B','G','R'));
    ms.insert(func('B','R','G'));
    cout<<(*ms.begin()).first<<endl<<(*ms.begin()).second;
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