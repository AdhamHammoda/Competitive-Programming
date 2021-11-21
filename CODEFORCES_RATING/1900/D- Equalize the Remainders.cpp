#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll freq[N],arr[N];;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    deque<pair<ll,ll>>dq;
    ll q=n/m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(freq[arr[i]%m]>=q)dq.push_back({arr[i]%m,i});
        else freq[arr[i]%m]++;
    }
    sort(dq.begin(),dq.end());
    ll c=0;
    for(int i=0;i<m;i++)
    {
        while(dq.front().first<i && freq[i]!=q)
        {
            ll tmp=i-dq.front().first;
            c+=tmp;
            arr[dq.front().second]+=tmp;
            dq.pop_front();
            freq[i]++;
        }
        while(freq[i]!=q)
        {
            ll tmp=abs(m+i-dq.back().first);
            c+=tmp;
            arr[dq.back().second]+=tmp;
            dq.pop_back();
            freq[i]++;
        }
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
