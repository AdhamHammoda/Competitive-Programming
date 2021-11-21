#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll>s;
    if(n%10==0)s.insert(n),n++;
    while(s.find(n)==s.end())
    {
        s.insert(n);
        if(n%10)
        {
            n++;
        }
        while(n%10==0)n/=10;
    }
    cout<<s.size();
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}