#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    ll mn=1e18;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')sum++;
        else sum--;
        mn=min(mn,sum);
    }
    cout<<abs(mn)<<endl;
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
