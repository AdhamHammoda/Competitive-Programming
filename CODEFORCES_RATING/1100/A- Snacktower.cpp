#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
// Implementation
// 7-3-2021 , 6:53 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n]={0};
    set<ll>origin;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll mx=n;
    priority_queue<ll>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.top()==mx)
        {
            while(!pq.empty() && pq.top()==mx)
            {
                cout<<pq.top()<<" ";
                pq.pop();
                mx--;
            }
            cout<<endl;
        }
        else cout<<endl;
    }
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
