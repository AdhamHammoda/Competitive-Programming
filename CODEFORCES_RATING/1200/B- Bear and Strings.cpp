#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 12:50 pm
void test_case()
{
    string s;
    cin>>s;
    string r="bear";
    ll sz=s.size();
    ll sum=0;
    for(int i=0;i<sz;i++)
    {
        ll c=0,d=0;
        for(int j=i;j<sz;j++)
        {
            if(s[j]==r[0])c=1;
            else if(s[j]==r[c])c++;
            else c=0;
            if(c==4)d=1;
            sum+=d;
        }
    }
    cout<<sum;
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
