#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<string,string>m;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(m[s1]=="")m[s1]=s2,v.push_back(s1);
    }
    ll c=0;
    for(auto x:v)
    {
        if(c==12)return;
        cout<<x<<" "<<m[x]<<endl;
        c++;
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
