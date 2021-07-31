#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=1e6;
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
int main()
{
    FIO
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(i)
        {
            if(n%i==0)
            {
                reverse(s.begin(),s.begin()+i);
            }
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;

}