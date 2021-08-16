#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=0,lst=-1;
    while(lst<n-1)
    {
        ll pos=-1;
        for(int i=n-1;i>max(-1LL,lst-k+1);i--)
        {
            if(arr[i] && i-k<=lst)
            {
                pos=i;
                break;
            }
        }
        if(pos==-1)
        {
            cout<<-1;
            return;
        }
        ans++;
        lst=pos+k-1;
    }
    cout<<ans;
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
