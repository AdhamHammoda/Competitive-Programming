#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[m];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        if(arr[i]==n || arr[i]==1)
        {
            cout<<"NO";
            return;
        }
        if(i-2>=0)if((arr[i-1]-arr[i-2]==1 && arr[i]-arr[i-1]==1))
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
