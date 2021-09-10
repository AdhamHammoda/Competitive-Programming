#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i)if(s[i]==s[i-1] && s[i]=='s')
        {
            cout<<"hiss";
            return;
        }
    }
    cout<<"no hiss";
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
