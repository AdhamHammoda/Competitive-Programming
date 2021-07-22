#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 10:53 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    ll cumsum[n+1];
    ll cumsumsorted[n+1];
    arr[0]=0;
    cumsum[0]=0;
    cumsumsorted[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        cumsum[i]=cumsum[i-1]+arr[i];
    }
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++)
    {
        cumsumsorted[i]=cumsumsorted[i-1]+arr[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<cumsum[c]-cumsum[b-1]<<endl;
        }
        else
        {
            cout<<cumsumsorted[c]-cumsumsorted[b-1]<<endl;
        }
    }
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
