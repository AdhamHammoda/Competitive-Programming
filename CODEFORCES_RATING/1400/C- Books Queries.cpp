#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
//    map<ll,ll> mleft;
//    map<ll,ll> mright;
    vector<ll> v;
    ll left=0;
    ll right=0;
    while(n--)
    {
        char a;
        ll b;
        cin>>a>>b;
        if(a=='L')
        {
            left--;
            m[b]= left;
        }
        else if(a=='R')
        {
            right++;
            m[b]=right;
        }
        else
        {
            ll posright = 0;
            ll posleft = 0;
            if(m[b]<0)
            {
                posleft = m[b] - left + 1;
                posright = right + abs(m[b]);
            }
            else
            {
                posleft = abs(left) + m[b] ;
                posright = right - m[b] +1;
            }
            v.push_back(min({posleft,posright})-1);
        }
    }
    for(auto x:v)cout<<x<<endl;

}
int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
 