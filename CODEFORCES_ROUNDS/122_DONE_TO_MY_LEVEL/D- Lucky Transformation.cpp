#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    deque<ll> dq;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='4' && s[i+1]=='7')dq.push_back(i);
    }
    while(!dq.empty() && k--)
    {
        ll x=dq.front();
        dq.pop_front();
        if(x-1>=0)
        {
            if(s[x-1]=='4' && x%2)
            {
                k%=2;
                if(k)s[x-1]='4',s[x]='4',s[x+1]='7';
                else s[x-1]='4',s[x]='7',s[x+1]='7';
                break;
            }
        }
        if(x%2==0)
        {
            s[x]=s[x+1]='4';
            if(x+2<n)
            {
                if(s[x+2]=='7')dq.push_front(x+1);
            }
        }
        else s[x]=s[x+1]='7';
    }
    cout<<s;
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