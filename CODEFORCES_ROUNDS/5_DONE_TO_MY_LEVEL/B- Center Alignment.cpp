#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    vector<string> v;
    string s;
    while(getline(cin,s))v.push_back(s);
    ll mx=0;
    for(auto x:v)mx=max(mx,(ll)x.size());
    for(int i=1;i<=mx+2;i++)cout<<"*";
    cout<<endl;
    ll r=0;
    for(auto x:v)
    {
        cout<<"*";
        ll sz=x.size();
        ll diff=(mx-sz)/2;
        if((mx-sz)%2)r++;
        if(r%2==0 && (mx-sz)%2)diff=(mx-sz)-diff;
        for(int i=1;i<=diff;i++)cout<<" ";
        cout<<x;
        for(int i=1;i<=(mx-x.size())-diff;i++)cout<<" ";
        cout<<"*"<<endl;
    }
    for(int i=1;i<=mx+2;i++)cout<<"*";
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}