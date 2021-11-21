#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 4:30 pm
void test_case()
{
    string s;
    ll c=0;
    cin>>s;
    ll sum=0;
    char a=s[0];
    for(int i=0;i<s.size();i++)
    {
        if(sum<5 && s[i]==a)
        {
            sum++;
        }
        else
        {
            a=s[i];
            c++;
            sum=1;
        }
    }
    cout<<c+1;
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
