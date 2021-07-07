#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:36 pm
void test_case()
{
    set<ll>s;
    for(int i=0;i<=500;i++)
    {
        s.insert(i*(i+1)/2);
    }
    ll n;
    cin>>n;
    s.find(n)==s.end()?cout<<"NO":cout<<"YES";
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
