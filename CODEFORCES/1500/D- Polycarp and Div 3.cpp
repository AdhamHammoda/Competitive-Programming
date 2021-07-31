#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
string s;
ll t;
void test_case()
{
    cin>>s;
    ll c=0,ans=0,lst=0;
    for(int i=0;i<s.size();i++)
    {
        lst+=s[i]-'0';
        c++;
        if((s[i]-'0')%3==0 || lst%3==0 || c%3==0)
        {
            ans++;
            lst=0;
            c=0;
        }
    }
    cout<<ans;
}
int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}