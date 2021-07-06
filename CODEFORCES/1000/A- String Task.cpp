#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 6:44 am
void test_case()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='o' || s[i]=='e' || s[i]=='u' || s[i]=='a' || s[i]=='i' || s[i]=='y')
        {
            continue;
        }
        cout<<"."<<s[i];
    }
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
