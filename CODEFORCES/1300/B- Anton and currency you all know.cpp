#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    set<string> ms;
    for(int i=0;i<s.size();i++)
    {
        if(!((s[i]-'0')&1) && ((s[i]-'0')<(s[s.size()-1]-'0')))
        {
            swap(s[i],s[s.size()-1]);
            cout<<s;
            return;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(!((s[i]-'0')&1) && ((s[i]-'0')>(s[s.size()-1]-'0')))
        {
            swap(s[i],s[s.size()-1]);
            cout<<s;
            return;
        }
    }
    cout<<-1;
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
