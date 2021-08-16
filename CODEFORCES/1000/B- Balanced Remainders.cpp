#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll x;
    ll m=3;
    ll arr[n];
    ll freq[4]={0};
    deque<pair<int,int>> dq;
    ll q=n/m;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
        if (freq[x%m]<q)freq[x%m]++;
        else dq.push_back({x%m,i});
    }
    x=0;
    sort(dq.begin(),dq.end());
    for (int i=0;i<m;i++)
    {
        if(freq[i]==q)continue;
        else
        {
            while(dq.front().first<i&&freq[i]!=q)
            {
                x+=abs(i-dq.front().first);
                dq.pop_front();
                freq[i]++;
            }
            while(freq[i]!=q)
            {
                x+=(m-dq.back().first+i);
                dq.pop_back();
                freq[i]++;
            }
        }
    }
    cout<<x<<endl;
}
int main()
{
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
