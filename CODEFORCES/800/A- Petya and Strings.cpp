#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-2-2021 , 4:48 AM
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(tolower(s1[i])>tolower(s2[i]))
        {
            cout<<1;
            return;
        }
        if(tolower(s1[i])<tolower(s2[i]))
        {
            cout<<-1;
            return;
        }
    }
    cout<<0;
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
