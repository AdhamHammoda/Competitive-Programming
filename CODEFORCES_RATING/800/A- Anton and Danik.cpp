#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 4:20 AM 
void test_case()
{
    ll a=0,d=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        a+=(s[i]=='A');
        d+=(s[i]=='D');
    }
    if(a<d)cout<<"Danik";
    if(a>d)cout<<"Anton";
    if(a==d)cout<<"Friendship";
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
