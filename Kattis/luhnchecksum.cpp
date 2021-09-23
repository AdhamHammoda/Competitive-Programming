#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<ll,ll>m;
    m[1]=2,m[2]=4,m[3]=6,m[4]=8,m[5]=1;
    m[6]=3,m[7]=5,m[8]=7,m[9]=9,m[0]=0;
    string s;
    cin>>s;
    ll sum=0;
    bool tmp=false;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(tmp)sum+=m[s[i]-'0'];
        else sum+=(s[i]-'0');
        tmp=!tmp;
    }
    sum%10?cout<<"FAIL"<<endl:cout<<"PASS"<<endl;
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
