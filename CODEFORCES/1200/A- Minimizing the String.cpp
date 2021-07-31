#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 2:59 pm
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool inn=false;
    ll ind=-1;
    for(int i=0;i<n;i++)
    {
        if(i && i+1<n)
        {
            if(s[i]-'a'>=s[i-1]-'a' && s[i+1]-'a'<s[i]-'a')
            {
                inn=true;
                ind=i;
                break;
            }
        }
        else if(!i)
        {
            if(s[i+1]-'a'<s[i]-'a')
            {
                inn=true;
                ind=i;
                break;
            }
        }
    }
    if(inn)
    {
        for(int i=0;i<n;i++)
        {
            if(ind==i)continue;
            cout<<s[i];
        }
    }
    else s.pop_back(),cout<<s;
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
