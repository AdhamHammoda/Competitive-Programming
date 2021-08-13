#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll ans=0;
    for(int i=0;i<n/2;i++)
    {
        map<char,ll> m;
        m[s1[i]]++,m[s1[n-i-1]]++;
        m[s2[i]]++,m[s2[n-i-1]]++;
        if(m.size()==4)ans+=2;
        else if(m.size()==3)ans+=1+(s1[i]==s1[n-i-1]);
        else if(m.size()==2)ans+=(m[s1[i]]!=2);
    }
    if(n%2 && s1[n/2]!=s2[n/2])ans++;
    cout<<ans;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
