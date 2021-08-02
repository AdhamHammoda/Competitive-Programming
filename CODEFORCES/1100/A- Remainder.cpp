#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    ll c=0;
    for(int i=n-x;i<n;i++)
    {
       if(i==n-y-1) c+=s[i]!='1';
       else c+=s[i]!='0';
    }
    cout<<c;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}