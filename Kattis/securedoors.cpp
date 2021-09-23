#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<string>s;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(a=="entry")
        {
            cout<<b<<" entered";
            if(s.find(b)!=s.end())cout<<" (ANOMALY)";
            cout<<endl;
            s.insert(b);
        }
        else
        {
            cout<<b<<" exited";
            if(s.find(b)==s.end())cout<<" (ANOMALY)";
            else s.erase(b);
            cout<<endl;
        }
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
