#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    for(int i=1;i<s.size();i+=2)
    {
        if(s[i]==s[i-1])
        {
            c++;
            if(s[i]=='a')s[i]='b';
            else if(s[i]=='b')s[i]='a';
        }
    }
    cout<<c<<endl<<s;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
