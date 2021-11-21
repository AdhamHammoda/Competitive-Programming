#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 10:01 am
void test_case()
{
    vector<ll> v;
    ll n;
    cin>>n;
    ll sum=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')sum++;
        else if(i && sum)
        {
            v.push_back(sum);
            sum=0;
        }
    }
    if(sum)v.push_back(sum);
    cout<<v.size()<<endl;
    for(auto x:v)cout<<x<<" ";
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
