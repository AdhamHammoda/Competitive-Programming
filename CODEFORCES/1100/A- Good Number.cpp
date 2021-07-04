#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 12:26 am
void test_case()
{
    ll q,k;
    cin>>q>>k;
    ll c=0;
    while(q--)
    {
        string s;
        cin>>s;
        map<ll,bool>vis;
        for(int i=0;i<s.size();i++)
        {
            vis[s[i]-'0']=1;
        }
        bool tr=true;
        for(int i=0;i<=k;i++)
        {
            if(!vis[i])tr=false;
        }
        if(tr)c++;
    }
    cout<<c;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
