#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    if(k>n || (k==1 && n!=1))cout<<-1,exit(0);
    string r="";
    while(k-->2 && n--)r.push_back('a'+k);
    reverse(r.begin(),r.end());
    string rr="";
    for(int i=0;i<n;i++)
    {
        rr+=(i%2?"b":"a");
    }
    cout<<rr<<r;
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