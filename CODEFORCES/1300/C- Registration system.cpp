#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<string,ll>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(m[s])cout<<s<<m[s]<<endl;
        else cout<<"OK"<<endl;
        m[s]++;
    }
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
