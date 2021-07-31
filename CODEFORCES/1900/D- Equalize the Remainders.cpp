#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll freq[200006];
ll arr[200006];
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x;
    deque<pair<int,int>> dq;
    ll q=n/m;
    for (int i = 0 ; i < n ; ++i)
    {
        cin>>x;
        arr[i]=x;
        if (freq[x%m] < q) freq[x%m]++;
        else dq.push_back({x%m,i});
    }
    x = 0 ;
    sort(dq.begin(),dq.end());
    for (int i = 0 ; i < m ; ++i)
    {
        if (freq[i] == q) continue;
        else
        {
            while(dq.front().first < i && freq[i] != q)
            {
                arr[dq.front().second]+=abs(i-dq.front().first);
                x+=abs(i-dq.front().first);
                dq.pop_front();
                freq[i]++;
            }
            while(freq[i] != q)
            {
                arr[dq.back().second]+=(m-dq.back().first+i);
                x+=(m-dq.back().first+i);
                dq.pop_back();
                freq[i]++;
            }
        }
    }
    cout<<x<<endl;
    for (int i = 0 ; i < n ; ++i) cout<<arr[i]<<" ";

    return 0;
}