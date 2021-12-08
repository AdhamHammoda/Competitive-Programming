#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
bool cmp(ll a,ll b)
{
    if(a%m==b%m)
    {
        if(a%2 && b%2)return a>b;
        else if(a%2 && b%2==0)return true;
        else if(a%2==0 && b%2)return false;
        else return a<b;
    }
    else return (a%m)<(b%m);
}
void test_case()
{
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<n<<" "<<m<<endl;
    if(!n && !m)exit(0);
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(true)
    {
        test_case();
    }
}
