#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 6:54 am
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool cant=false;
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cant+=(s[i]!='4' && s[i]!='7');
        if(i<n/2)sum1+=s[i]-'0';
        else sum2+=s[i]-'0';
    }
    if(!cant && sum1==sum2)cout<<"YES";
    else cout<<"NO";
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
