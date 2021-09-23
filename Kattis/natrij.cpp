#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    ll h1=0,m1=0,sec1=0;
    ll h2=0,m2=0,sec2=0;
    h1=10*(s1[0]-'0')+(s1[1]-'0');
    m1=10*(s1[3]-'0')+(s1[4]-'0');
    sec1=10*(s1[6]-'0')+(s1[7]-'0');
    h2=10*(s2[0]-'0')+(s2[1]-'0');
    m2=10*(s2[3]-'0')+(s2[4]-'0');
    sec2=10*(s2[6]-'0')+(s2[7]-'0');
    ll anssec=0;
    if(h1>h2)
    {
        anssec+=(24-h1)*3600-(m1)*60-(sec1);
        anssec+=h2*3600+(m2)*60+sec2;
    }
    else if(h2==h1 && m1==m2 && sec1==sec2)
    {
        cout<<"24:00:00";
        return;
    }
    else
    {
        anssec=(h2-h1)*3600+(m2-m1)*60+(sec2-sec1);
    }
    ll ansh=anssec/3600;
    anssec-=ansh*3600;
    ll ansm=anssec/60;
    anssec-=ansm*60;
    if(ansh<10)cout<<0;
    cout<<ansh<<":";
    if(ansm<10)cout<<0;
    cout<<ansm<<":";
    if(anssec<10)cout<<0;
    cout<<anssec;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
