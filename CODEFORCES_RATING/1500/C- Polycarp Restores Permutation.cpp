#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll arr[200005];
ll n;
bool func(ll a,ll b)
{
    if(a<0 || b<0 || a>n || b>n)return 0;
    set<ll>s;
    deque<ll>v1;
    deque<ll>v2;
    v1.push_back(a);
    v2.push_back(b);
    s.insert(a);
    s.insert(b);
    for(int i=0;i<n-1;i++)
    {
        if(v1.back()+arr[i]>0 && v1.back()+arr[i]<=n && s.find(v1.back()+arr[i])==s.end())
        {
            s.insert(v1.back()+arr[i]);
            v1.push_back(v1.back()+arr[i]);
        }
        else break;
        if(v2.front()-arr[n-i-2]>0 && v2.front()-arr[n-i-2]<=n && s.find(v2.front()-arr[n-i-2])==s.end())
        {
            s.insert(v2.front()-arr[n-i-2]);
            v2.push_front(v2.front()-arr[n-i-2]);
        }
        else break;
    }
    if(s.size()!=n)return 0;
    for(auto x:v1)cout<<x<<" ";
    for(auto x:v2)cout<<x<<" ";
    return 1;
}
void test_case()
{
    cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<-n+1 || sum>n-1)
    {
        cout<<-1;
        return;
    }
    if(sum<0)
    {
        for(int i=n;i>=1;i--)
        {
            if(func(i,i+sum))
            {
                return;
            }
        }
        cout<<-1;
        return;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(func(i,i+sum))
            {
                return;
            }
        }
    }
    cout<<-1;
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