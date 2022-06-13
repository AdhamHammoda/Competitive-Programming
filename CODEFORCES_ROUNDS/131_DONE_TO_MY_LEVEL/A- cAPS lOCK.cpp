#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    ll all=0;
    for(int i=1;i<s.size();i++)all+=(s[i]<='Z' && s[i]>='A');
    if(all==s.size()-1)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='Z' && s[i]>='A')s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
            cout<<s[i];
        }
    }
    else cout<<s;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}