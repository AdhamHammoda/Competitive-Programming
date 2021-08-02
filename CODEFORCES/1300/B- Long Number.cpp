#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>m;
    for(int i=1;i<10;i++)
    {
        ll a;
        cin>>a;
        m[i+'0']=a;
    }
    bool f=false;
    for(int i=0;i<n;i++)
    {
        if(m[s[i]]>s[i]-'0')
        {
            f=true;
            s[i]='0'+m[s[i]];
        }
        else if(m[s[i]]>=s[i]-'0' && f)
        {
            s[i]='0'+m[s[i]];
        }
        else if(!f)continue;
        else break;
    }
    cout<<s;
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