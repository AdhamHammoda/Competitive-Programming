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
    ll c=0;
    set<char>ms;
    ms.insert('R');
    ms.insert('G');
    ms.insert('B');
    for(int i=0;i<s.size();i++)
    {
        if(i)
        {
            if(s[i]==s[i-1] && s[i]==s[i+1])
            {
                c++;
                for(auto x:ms)
                {
                    if(x!=s[i-1] && x!=s[i+1])
                    {
                        s[i]=x;
                        break;
                    }
                }
            }
            else if(s[i]==s[i-1])
            {
                c++;
                for(auto x:ms)
                {
                    if(x!=s[i-1] && x!=s[i+1])
                    {
                        s[i]=x;
                        break;
                    }
                }
            }
        }
    }
    cout<<c<<endl<<s;
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