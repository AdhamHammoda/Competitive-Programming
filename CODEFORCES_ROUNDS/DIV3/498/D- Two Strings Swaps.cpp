#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==b[i])continue;
        if(a[i]==b[n-i-1])swap(b[i],b[n-i-1]);
        else if(b[i]==a[n-i-1])swap(a[i],a[n-i-1]);
        else if(b[i]==b[n-i-1])swap(a[i],b[n-i-1]);
    }
    ll c=0;
    for(int i=0;i<n;i++)c+=(a[i]!=b[i]);
    cout<<c;
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
