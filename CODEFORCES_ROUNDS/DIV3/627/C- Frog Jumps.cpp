#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    string r=" ";
    r+=s;
    ll ans=0,lst=0;
    for(int i=1;i<r.size();i++)
    {
        if(r[i]=='R')ans=max(ans,i-lst),lst=i;
    }
    cout<<max(ans,(ll)r.size()-lst)<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
