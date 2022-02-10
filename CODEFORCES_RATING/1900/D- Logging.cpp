#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    getline(cin,s);
    ll lst=1440,c=0,ans=0;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        ll t1h1=s[1]-'0',t1h2=s[2]-'0';
        ll t1m1=s[4]-'0',t1m2=s[5]-'0';
        ll tmp=(60*((10*t1h1+t1h2)%12)+10*t1m1+t1m2)+(s[7]=='p')*720;
        if(lst==tmp)c++;
        else c=1;
        if(c>10)c=1,lst=1440;
        ans+=(tmp<lst);
        lst=tmp;
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
