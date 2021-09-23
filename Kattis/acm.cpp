#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a;
    char b;
    string s;
    ll c=0,sum=0;
    map<char,ll>mp;
    while(cin>>a)
    {
        if(a==-1)
        {
            cout<<c<<" "<<sum;
            return;
        }
        cin>>b>>s;
        if(s=="wrong")
        {
            mp[b]++;
        }
        else if(s=="right")
        {
            c++;
            sum+=a+20*mp[b];
        }
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
