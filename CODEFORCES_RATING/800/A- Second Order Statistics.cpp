#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 9:47 am
void test_case()
{
    ll n;
    cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }
    s.erase(s.begin());
    if(s.size())cout<<*s.begin();
    else cout<<"NO";
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
