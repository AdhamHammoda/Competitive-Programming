#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    map<ll,set<ll>>all;
    set<ll> numbers;
    while(m--)
    {
        char a;
        ll b;
        cin>>a>>b;
        if(a=='+')
        {
            if(numbers.find(b)!=numbers.end())
            {
                cout<<"Already on"<<endl;
                continue;
            }
            ll tmp=b;
            bool can=true;
            for(ll i=2;i*i<=tmp;i++)
            {
                if(tmp%i==0)
                {
                    if(all[i].size())
                    {
                        can=false;
                        cout<<"Conflict with "<<(*all[i].begin())<<endl;
                        break;
                    }
                    while(tmp%i==0)tmp/=i;
                }
            }
            if(tmp>1 && can && all[tmp].size())
            {
                can=false;
                cout<<"Conflict with "<<(*all[tmp].begin())<<endl;
            }
            if(!can)continue;
            tmp=b;
            for(ll i=2;i*i<=tmp;i++)
            {
                if(tmp%i==0)
                {
                    while(tmp%i==0)tmp/=i;
                    all[i].insert(b);
                }
            }
            if(tmp>1)all[tmp].insert(b);
            numbers.insert(b);
            cout<<"Success"<<endl;
        }
        else
        {
            if(numbers.find(b)==numbers.end())
            {
                cout<<"Already off"<<endl;
                continue;
            }
            ll tmp=b;
            for(ll i=2;i*i<=tmp;i++)
            {
                if(tmp%i==0)
                {
                    while(tmp%i==0)tmp/=i;
                    all[i].erase(b);
                }
            }
            if(tmp>1)all[tmp].erase(b);
            numbers.erase(b);
            cout<<"Success"<<endl;
        }
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}