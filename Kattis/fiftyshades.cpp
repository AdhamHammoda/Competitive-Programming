#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n--)
    {
        string s;
        cin>>s;
        ll d=0;
        for(int i=0;i<s.size()-3;i++)
        {
            if(d)break;
            if(s[i]=='p' || s[i]=='P')
            if(s[i+1]=='i' || s[i+1]=='I')
            if(s[i+2]=='n' || s[i+2]=='N')
            if(s[i+3]=='k' || s[i+3]=='K')
            c++,d++;
            if(s[i]=='r' || s[i]=='R')
            if(s[i+1]=='o' || s[i+1]=='O')
            if(s[i+2]=='s' || s[i+2]=='S')
            if(s[i+3]=='e' || s[i+3]=='E')
            c++,d++;
        }
    }
    if(!c)cout<<"I must watch Star Wars with my daughter";
    else cout<<c;
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
