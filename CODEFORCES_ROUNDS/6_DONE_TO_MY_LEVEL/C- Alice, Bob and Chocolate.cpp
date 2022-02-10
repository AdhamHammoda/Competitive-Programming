#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ptr1=0,ptr2=n-1;
    ll alice=0,bob=0;
    ll cal=0,cb=0;
    while(ptr1<=ptr2)
    {
       while(alice<=bob && ptr1<=ptr2)
       {
           alice+=arr[ptr1];
           ptr1++;
           cal++;
       }
       while(bob<alice && ptr1<=ptr2)
       {
           bob+=arr[ptr2];
           ptr2--;
           cb++;
       }
    }
    cout<<cal<<" "<<cb;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}