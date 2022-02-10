#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string rankk="6789TJQKA";
    map<char,ll>m;
    for(int i=0;i<rankk.size();i++)m[rankk[i]]=i;
    char a;
    cin>>a;
    string s1,s2;
    cin>>s1>>s2;
    if(s1[1]==s2[1])
    {
        if(m[s1[0]]>m[s2[0]])cout<<"YES";
        else cout<<"NO";
        return;
    }
    if(s1[1]==a)cout<<"YES";
    else cout<<"NO";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}