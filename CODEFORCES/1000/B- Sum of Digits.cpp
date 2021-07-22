#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 8:15 pm
void test_case()
{
    string s;
    cin>>s;
    ll sum=0,c=0;
    while(s.size()!=1)
    {
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
        }
        s=to_string(sum);
        sum=0;
        c++;
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
