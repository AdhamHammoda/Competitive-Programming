#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s2;
    for(int i=0;i<n;i++)
    {
       ll idx = (2*i+i*i-i)/2;
       if(idx<n) s2.push_back(s[idx]);
    }
   cout<<s2;
}

int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}