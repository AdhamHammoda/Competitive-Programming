#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')cout<<0;
        else if(i<s.size()-1)
        {
            if(s[i]=='-' && s[i+1]=='.')cout<<1,i++;
            else if(s[i]=='-' && s[i+1]=='-')cout<<2,i++;
        }
    }
}
int main()
{
//    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
