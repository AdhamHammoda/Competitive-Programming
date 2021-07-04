#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-4-2021 , 3:36 am
void test_case()
{
    string s;
    cin>>s;
    ll c=0;
    for(int i=0;i<s.size();i++)if(s[i]=='1')c++;
    ll sz=s.size();
    cout<<sz/2 +sz%2 - (c<2 && sz%2);
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
