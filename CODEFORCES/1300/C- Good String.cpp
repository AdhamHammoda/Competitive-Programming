#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string r="";
    for(int i=0;i<n;i++)
    {
        if(r.size()%2==0 || s[i]!=r[r.size()-1])
        {
            r.push_back(s[i]);
        }
    }
    if(r.size()%2)r.pop_back();
    cout<<n-r.size()<<endl;
    for(auto x:r)cout<<x;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}