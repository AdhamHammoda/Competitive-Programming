#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 4:55 pm
void test_case()
{
    ll k;
    cin>>k;
    ll arr[12];
    priority_queue<ll>pq;
    for(int i=0;i<12;i++)
    {
        ll a;
        cin>>a;
        pq.push(a);
    }
    while(!pq.empty())
    {
        if(k<=0)
        {
            break;
        }
        ll b=pq.top();
        k-=b;
        pq.pop();
    }
    k<=0?cout<<12-pq.size():cout<<-1;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
