#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
priority_queue<ll> binary(ll x)
{
    priority_queue<ll>pq;
    ll p=ceil(log2(x));
    ll i=0;
    while(i<=p)
    {
        if(x%2)pq.push(pow(2,i));
        x/=2;
        i++;
    }
    return pq;
}
void test_case()
{
   ll n,k;
   cin>>n>>k;
   priority_queue<ll> pq = binary(n);
   vector<ll>v;
   if(k<pq.size() || n<k)cout<<"NO";
   else if(k==pq.size())
   {
       cout<<"YES"<<endl;
       while(!pq.empty())
       {
           cout<<pq.top()<<" ";
           pq.pop();
       }
   }
   else if(k>pq.size())
   {
       while(pq.size()!=k)
       {
           ll top=pq.top();
           pq.pop();
           pq.push(top/2);
           pq.push(top/2);
       }
       cout<<"YES"<<endl;
       while(!pq.empty())
       {
           cout<<pq.top()<<" ";
           pq.pop();
       }
   }
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