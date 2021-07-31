#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N = 2e5+5;
ll arr[N];
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll ans=sum/n;
        ll c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>ans)c1++;
        }
        cout<<c1<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}