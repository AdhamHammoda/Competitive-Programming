#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    string num="",alp="",r="";
    bool allnum=true,justbefore=false;
    ll c=0;
    for(int i=0;i<s.size();i++)
    {
        char x=s[i];
        if(x==';' || x==',')
        {
            if(allnum && r.size())num+=r,num+=',';
            else c++,alp+=r,alp+=',';
            if(i==s.size()-1)justbefore+=(allnum && r.size());
            r="";
            allnum=true;
            continue;
        }
        r+=x;
        if(x>'9' || x<'0' || (r.size()>1 && r[0]=='0'))allnum=false;
    }
    if(r.size())
    {
        if(allnum)num+=r;
        else alp+=r,c++;
    }
    if(num.size() && num.back()==',')num.pop_back();
    if((s.back()==',' || s.back()==',') && justbefore)
    {
        c++;
        if(alp.size())alp+=',';
    }
    if(alp.size() && alp.back()==',' && s.back()!=',' && s.back()!=';')alp.pop_back();
    if(num.size())cout<<"\""<<num<<"\""<<endl;
    else cout<<"-"<<endl;
    if(c)cout<<"\""<<alp<<"\""<<endl;
    else cout<<"-"<<endl;

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}