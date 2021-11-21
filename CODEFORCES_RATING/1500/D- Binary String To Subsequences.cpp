#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> v(n);
    vector<ll>pos0,pos1;
    for(int i=0;i<n;i++)
    {
        ll tmp=pos0.size()+pos1.size();
        if(s[i]=='0')
        {
            if(pos1.empty())
            {
                pos0.push_back(tmp);
            }
            else
            {
                tmp=pos1.back();
                pos1.pop_back();
                pos0.push_back(tmp);
            }
        }
        else
        {
            if(pos0.empty())
            {
                pos1.push_back(tmp);
            }
            else
            {
                tmp=pos0.back();
                pos0.pop_back();
                pos1.push_back(tmp);
            }
        }
        v[i]=tmp+1;
    }
    cout<<pos0.size()+pos1.size()<<endl;
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
