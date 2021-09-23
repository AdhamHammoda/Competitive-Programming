#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll cas=1;
void test_case()
{
    cout<<"Case "<<cas<<": ";
    cas++;
    string s1,s2;
    cin>>s1>>s2;
    ll c=0,zto1=0,otoz=0,diff=0;
    ll n=s1.size();
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])c++;
        if(s1[i]=='?' && s2[i]=='1')diff--;
        else if(s1[i]=='0' && s2[i]=='1')zto1++,diff--;
        else if(s1[i]=='1' && s2[i]=='0')otoz++,diff++;
    }
    if(diff>0)cout<<-1<<endl;
    else cout<<c-min(zto1,otoz)<<endl;
}
int main()
{
    FIO
    int t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
