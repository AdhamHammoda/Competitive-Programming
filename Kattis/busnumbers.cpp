#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    deque<ll>dq;
    for(int i=0;i<n;i++)
    {
        dq.push_back(arr[i]);
        while(arr[i]==arr[i+1]-1 && i+1<n)
        {
            dq.push_back(arr[i+1]);
            i++;
        }
        cout<<dq.front();
        (dq.size()>=3)?cout<<"-":cout<<" ";
        if(dq.back()!=dq.front())cout<<dq.back()<<" ";
        dq.clear();
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
