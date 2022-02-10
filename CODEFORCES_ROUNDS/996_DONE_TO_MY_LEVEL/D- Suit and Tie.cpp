#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
set<ll> m[5000];
ll arr[2000];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=2*n;i++)cin>>arr[i],m[arr[i]].insert(i);
    ll c=0;
    for(int i=1;i<=2*n;i++)
    {
        if(!m[arr[i]].size())continue;
        while(m[arr[i]].size()!=1)
        {
            auto f=*m[arr[i]].begin();
            auto s=*m[arr[i]].rbegin();
            while(f+1<s)
            {
                c++;
                swap(arr[s],arr[s-1]);
                m[arr[s-1]].erase(s);
                m[arr[s-1]].insert(s-1);
                m[arr[s]].erase(s-1);
                m[arr[s]].insert(s);
                s--;
            }
            m[arr[i]].erase(f);
        }
    }
    cout<<c;
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