#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    int mx=0;
    for(int i=0;i<s.size();i++)
    {
        mx=max(mx,s[i]-'0');
    }
    cout<<mx<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}