#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-2-2021 , 5:29 PM
void test_case()
{
    string s;
    cin>>s;
    if(s.size()<=10)cout<<s<<endl;
    else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
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
