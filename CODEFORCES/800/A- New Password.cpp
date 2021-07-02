#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-2-2021 , 6:30 PM
void test_case()
{
    ll n,r;
    cin>>n>>r;
    char a='a';
    string s="";
    ll j=0;
    for(int i=0;i<n;i++)
    {
        if(j==r)
        {
            j=0;
        }
        s.push_back(a+j);
        j++;
    }
    cout<<s;
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
