#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll mx=0;
    for(int i=0;i<n-1;i++)if(s.substr(0,i+1)==s.substr(n-i-1))mx=i+1;
    cout<<s;
    for(int i=1;i<k;i++)cout<<s.substr(mx);
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
