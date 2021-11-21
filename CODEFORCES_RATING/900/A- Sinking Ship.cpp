#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 3:20 am
void test_case()
{
    ll n;
    vector<string> men;
    vector<string> trans;
    vector<string> rats;
    vector<string> children;
    string cap;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(b=="captain")cap=a;
        else if(b=="woman" || b=="child")trans.push_back(a);
        else if(b=="rat")rats.push_back(a);
        else if(b=="man")men.push_back(a);
    }
    for(auto x:rats)cout<<x<<endl;
    for(auto x:trans)cout<<x<<endl;
    for(auto x:men)cout<<x<<endl;
    cout<<cap;
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
