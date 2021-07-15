#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 5:23 am
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c1=0,c2=0;
    for(int i=0;i<s.size();i++)
    {
        s[i]=='x'?c1++:c2++;
    }
    ll c=0;
    for(int i=0;i<s.size();i++)
    {
        if(c1==c2)break;
        if(c1>c2 && s[i]!='X')
        {
            s[i]='X';
            c1--;
            c2++;
            c++;
        }
        else if(c2>c1 && s[i]!='x')
        {
            s[i]='x';
            c2--;
            c1++;
            c++;
        }
    }
    cout<<c<<endl<<s;
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
