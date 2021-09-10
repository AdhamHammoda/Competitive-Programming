#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll c=0;
    vector<string> v(5);
    vector<ll> ans;
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
        ll a=0;
        a+=(v[i].find("FBI")!=string::npos);
        if(a)ans.push_back(i+1);
        c+=a;
    }
    if(!c)cout<<"HE GOT AWAY!";
    else for(auto x:ans)cout<<x<<" ";
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
