#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string name;
    cin>>name;
    ll a,b,c;
    bool tr=false;
    char e;
    cin>>a>>e>>b>>e>>c;
    tr+=(a>=2010);
    cin>>a>>e>>b>>e>>c;
    tr+=(a>=1991);
    ll cr;
    cin>>cr;
    cout<<name;
    if(tr)
    {
        cout<<" eligible";
    }
    else
    {
        if(cr>40)cout<<" ineligible";
        else cout<<" coach petitions";
    }
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}