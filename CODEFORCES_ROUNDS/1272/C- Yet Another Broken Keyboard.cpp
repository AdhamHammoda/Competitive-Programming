#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    map<char,bool>m;
    string s;
    cin>>s;
    for(int i=0;i<k;i++)
    {
        char a;
        cin>>a;
        m[a]=1;
    }
    ll ans=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(!m[s[i]])ans+=c*(c+1)/2,c=0;
        else c++;
    }
    ans+=c*(c+1)/2;
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
