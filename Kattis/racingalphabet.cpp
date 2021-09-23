#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
string s;
map<char,ll>m;
ll c=0;
void test_case()
{
    getline(cin,s);
    c++;
    if(c==1)return;
    char a=s[0];
    long double ans=0,sum=0.0;
    long double cir=acos(-1)*60.0;
    for(int i=0;i<s.size();i++)
    {
        ans=fmin(abs(m[s[i]]-m[a]),28.0-abs(m[s[i]]-m[a]));
        sum+=1.0;
        sum+=((ans/28.0)*cir)/15.0;
        a=s[i];
    }
    cout<<fixed<<setprecision(10)<<sum<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll j=1;
    for(char i='A';i<='Z';i++)
    {
        m[i]=j;
        j++;
    }
    m[' ']=27;
    m['\'']=28;
    ll t;
    cin>>t;
    t++;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
