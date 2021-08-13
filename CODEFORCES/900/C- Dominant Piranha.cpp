#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mx=0,mxind=-1;
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
        if(arr[i]>mx)mx=arr[i];
    }
    if(s.size()==1)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!i)
        {
            if(arr[i+1]<arr[i] && arr[i]==mx)
            {
                cout<<i+1<<endl;
                return;
            }
            continue;
        }
        if(i==n-1)
        {
            if(arr[i-1]<arr[i] && arr[i]==mx)
            {
                cout<<i+1<<endl;
                return;
            }
        }
        if(arr[i]==mx && (arr[i-1]<mx || arr[i+1]<mx))
        {
            cout<<i+1<<endl;
            return;
        }
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
