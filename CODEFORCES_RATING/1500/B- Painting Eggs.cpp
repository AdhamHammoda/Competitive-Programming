#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    ll sa=0,sg=0;
    for(int i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
    string s="";
    for(int i=0;i<n;i++)
    {
        if(abs(sa+arr[i].first-sg)<=500)sa+=arr[i].first,s.push_back('A');
        else if(abs(sg+arr[i].second-sa)<=500)sg+=arr[i].second,s.push_back('G');
        else cout<<-1,exit(0);
    }
    cout<<s;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}