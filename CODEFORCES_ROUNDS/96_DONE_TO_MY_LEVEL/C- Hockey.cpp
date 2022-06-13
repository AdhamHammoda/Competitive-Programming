#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll n;
    cin>>n;
    multiset<string> ms;
    while(n--)
    {
        string r;
        cin>>r;
        for(int i=0;i<r.size();i++)r[i]=tolower(r[i]);
        ms.insert(r);
    }
    string s;
    cin>>s;
    char a;
    cin>>a;
    string tmp=s;
    for(int i=0;i<tmp.size();i++)tmp[i]=tolower(tmp[i]);
    while(!ms.empty())
    {
        string tofind=(*(ms.rbegin()));
        ll szto=tofind.size();
        ll szs=s.size();
        ll n=szs-szto;
        for(int x=0;x<max(0LL,n+1);x++)
        {
            if(tmp.substr(x,szto)==tofind)
            {
                for(int i=x;i<x+szto;i++)
                {
                    char y=tolower(tmp[i]);
                    if(s[i]<='Z' && s[i]>='A')
                    {
                        char y=tmp[i];
                        if(y==a)
                        {
                            bool f=false;
                            for(char c='a';!f;c++)
                            {
                                if(c!=y)f=true,s[i]=toupper(c);
                            }
                        }
                        else s[i]=toupper(a);
                    }
                    else
                    {
                        if(y==a)
                        {
                            bool f=false;
                            for(char c='a';!f;c++)
                            {
                                if(c!=y)f=true,s[i]=tolower(c);
                            }
                        }
                        else s[i]=tolower(a);
                    }
                }
            }
        }
        ms.erase(ms.find(tofind));
    }
    cout<<s;
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