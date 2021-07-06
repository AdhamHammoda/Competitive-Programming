#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-6-2021 , 9:10 am
void test_case()
{
    ll n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<=n/2;i++)
    {
        string r="";
        for(int j=0;j<(n-(2*i+1))/2;j++)
        {
            r.push_back('*');
        }
        for(int j=0;j<(2*i+1);j++)
        {
            r.push_back('D');
        }
        for(int j=0;j<(n-(2*i+1))/2;j++)
        {
            r.push_back('*');
        }
        v.push_back(r);
        cout<<r<<endl;
    }
    for(int i=v.size()-2;i>=0;i--)
    {
        cout<<v[i]<<endl;
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
