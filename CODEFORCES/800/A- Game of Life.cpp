#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<string>v;
    v.push_back(s);
    while(m--)
    {
        string u="";
        ll sz=v.size()-1;
        if(v[sz][0]=='0' && v[sz][1]=='1')u+="1";
        else if(v[sz][0]=='0' && v[sz][1]=='0')u+="0";
        else if(v[sz][0]=='1' && v[sz][1]=='0')u+="1";
        else if(v[sz][0]=='1' && v[sz][1]=='1')u+="1";
        for(int i=1;i<n-1;i++)
        {
            if(i && v[sz][i]=='0')
            {
                if((v[sz][i-1]=='1' || v[sz][i+1]=='1') && !(v[sz][i-1]=='1' && v[sz][i+1]=='1'))
                {
                    u+="1";
                }
                else
                {
                    u+="0";
                }
            }
            else
            {
                if(v[sz][i]=='0')u+="0";
                else if(v[sz][i]=='1')u+="1";
            }
        }
        if(v[sz][n-1]=='0' && v[sz][n-2]=='1')u+='1';
        else if(v[sz][n-1]=='0' && v[sz][n-2]=='0')u+='0';
        else if(v[sz][n-1]=='1' && v[sz][n-2]=='0')u+='1';
        else if(v[sz][n-1]=='1' && v[sz][n-2]=='1')u+='1';
        if(u==v[v.size()-1])break;
        else v.push_back(u);
    }
    cout<<v[v.size()-1]<<endl;
}
int main()
{
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}

 