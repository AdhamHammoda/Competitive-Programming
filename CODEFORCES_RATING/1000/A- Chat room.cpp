#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 6:45 am
void test_case()
{
    string s;
    cin>>s;
    string r="hello";
    ll j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==r[j])j++;
    }
    j>4?cout<<"YES":cout<<"NO";
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
