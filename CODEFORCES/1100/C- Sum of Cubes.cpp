#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
set<ll> st;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
void test_case()
{
    ll n;
    cin>>n;
    for(auto x:st)
    {
        if(x>n)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(st.find(n-x)!=st.end())
        {
            cout<<"YES"<<endl;
            return;
        }
    }
}
int main()
{
    FIO
    ll t;
//    t=1;
    cin>>t;
    for(int i=1;i<10004;i++)
    {
        st.insert(binpow(i,3));
    }
    while(t--)
    {
        test_case();
    }
}
