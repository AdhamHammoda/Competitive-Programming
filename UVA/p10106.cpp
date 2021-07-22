#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-20-2021 , 6:50 pm
string s1,s2;
void test_case()
{
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    vector<string> v;
    for(int i=0;i<s2.size();i++)
    {
        string r="";
        for(int k=0;k<i;k++)
        {
            r.push_back('0');
        }
        int cr=0;
        for(int j=0;j<s1.size();j++)
        {
            int a=s2[i]-'0';
            int b=s1[j]-'0';
            int pr=a*b + cr;
            cr=pr/10;
            int mod=pr%10;
            if(j!=s1.size()-1)r.push_back('0'+mod);
            else
            {
                r.push_back('0'+mod);
                if(cr!=0)r.push_back('0'+cr);
            }
        }
        v.push_back(r);
    }
    string res="";
    ll rescar=0;
    for(int i=0;i<250*250;i++)
    {
        if(i>=v[v.size()-1].size())
        {
            break;
        }
        int ressum=0;
        ressum+=rescar;
        for(auto x:v)
        {
            if(x.size()<=i)continue;
            int a=x[i]-'0';
            ressum+=a;
        }
        rescar=ressum/10;
        res.push_back('0'+(ressum%10));
    }
    if(rescar!=0)res.push_back('0'+rescar);
    reverse(res.begin(),res.end());
    bool z=true;
    for(auto x:res)
    {
        if(x!='0')z=false;
    }
    !z?cout<<res<<endl:cout<<0<<endl;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
//    t=1;
    while(cin>>s1>>s2)
    {
        test_case();
    }
}
