#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:04 pm
void test_case()
{
    ll n;
    cin>>n;
    if(n<=30)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        set<ll>s;
        s.insert(6),s.insert(10),s.insert(14),s.insert(n-30);
        if(s.size()==3)s.erase(14),s.insert(15),s.insert(n-31);
        for(auto x:s)cout<<x<<" ";
        cout<<endl;
    }
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}
