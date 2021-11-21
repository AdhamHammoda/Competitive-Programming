#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ptr1=0,ptr2=n-1;
    ll c=0;
    while(ptr1<=ptr2)
    {
        if(arr[ptr1]<=k)
        {
            ptr1++;
            c++;
        }
        else if(arr[ptr2]<=k)
        {
            ptr2--;
            c++;
        }
        else break;
    }
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
