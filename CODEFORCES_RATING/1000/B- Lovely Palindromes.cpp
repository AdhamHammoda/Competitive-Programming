#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 11:20 pm
void test_case()
{
    string s;
    cin>>s;
    string r;
    for(int i=0;i<s.size();i++)
    {
        r.push_back(s[i]);
    }
    reverse(r.begin(),r.end());
    cout<<s<<r;
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
