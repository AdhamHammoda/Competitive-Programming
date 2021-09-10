#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll p,n;
    cin>>p>>n;
    set<string> s;
    ll idx=1e18;
    for(int i=1;i<=n;i++)
    {
        string a;
        cin>>a;
        s.insert(a);
        if(s.size()==p)
        {
            idx=min(idx,(ll)i);
        }
    }
    idx!=1e18?cout<<idx:cout<<"paradox avoided";
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
