#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        char a=' ';
        if(i%2)a=((s1[i]-'A')+(s2[i]-'A'))%26 + 'A';
        else a=((s1[i]-'A')-(s2[i]-'A') + 26)%26 + 'A';
        cout<<a;
    }
}
int main()
{
    FIO
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
