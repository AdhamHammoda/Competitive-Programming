#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    getline(cin,s);
    ll prv=0;
    for(int i=0;i<s.size();i++)
    {
        if(i)prv=int(s[i-1]);
        ll cur=int(s[i]);
        string r1="",r2="";
        ll n1=0,n2=0;
        for(int j=0;j<8;j++)
        {
            if((prv>>j)&1)r1+="1";
            else r1+="0";
            if((cur>>j)&1)r2+="1";
            else r2+="0";
        }
        for(int k=r1.size()-1;k>=0;k--)n1+=(r1[k]=='1')*(1LL<<(r1.size()-k-1));
        for(int k=r2.size()-1;k>=0;k--)n2+=(r2[k]=='1')*(1LL<<(r2.size()-k-1));
        ll tmp=(n1-n2+256)%256;
        cout<<tmp<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}