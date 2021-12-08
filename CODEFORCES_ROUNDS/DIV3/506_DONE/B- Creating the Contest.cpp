#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll c=1;
    ll mx=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=2*arr[i-1])c++;
        else mx=max(mx,c),c=1;
    }
    mx=max(mx,c);
    cout<<mx;
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
