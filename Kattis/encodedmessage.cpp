#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll m=s.size();
    ll n=sqrt(m);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<m;j+=n)
        {
            cout<<s[j];
        }
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
