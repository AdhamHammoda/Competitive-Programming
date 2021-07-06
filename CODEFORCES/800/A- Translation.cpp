#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 6:40 am
void test_case()
{
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    s==t?cout<<"YES":cout<<"NO";
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
