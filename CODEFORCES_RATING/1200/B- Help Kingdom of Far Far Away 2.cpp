#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll pos=s.size();
    if(s.find(".")!=string::npos)pos=s.find(".");
    string tmp1="",tmp2="";
    for(int i=pos,j=0;i<s.size() && j<3;i++,j++)
    {
        tmp2+=s[i];
    }
    for(int i=pos-1,j=0;i>=0;i--,j++)
    {
        if(j%3==0 && j && s[i]!='-')tmp1+=",";
        if(s[i]!='-')tmp1+=s[i];
    }
    reverse(tmp1.begin(),tmp1.end());
    if(s[0]=='-')cout<<"(";
    cout<<"$"<<tmp1;
    cout<<tmp2;
    if(tmp2=="")cout<<".00";
    if(tmp2.size()==2)cout<<0;
    if(s[0]=='-')cout<<")";
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
