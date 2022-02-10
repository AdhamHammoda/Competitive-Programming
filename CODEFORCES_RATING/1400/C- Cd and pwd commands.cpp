#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    deque<string> dq;
    ll n;
    cin>>n;
    map<string,string>par;
    while(n--)
    {
        string a;
        cin>>a;
        if(a=="pwd")
        {
            if(!dq.size())cout<<"/"<<endl;
            else
            {
                cout<<"/";
                for(auto x:dq)cout<<x<<"/";
                cout<<endl;
            }
        }
        else
        {
            string s;
            cin>>s;
            string r="";
            ll c=0;
            if(s[0]=='/')dq.clear();
            for(int i=(s[0]=='/');i<s.size();i++)
            {
                char x=s[i];
                if(x=='/')
                {
                    if(r=="..")dq.pop_back();
                    else dq.push_back(r);
                    r="";
                }
                else r.push_back(x);
            }
            if(r=="..")dq.pop_back();
            else dq.push_back(r);
        }
    }
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