#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,s,d;
    cin>>n>>s>>d;
    ll arr[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll r=0;
    while(s!=d)
    {
        s=arr[s];
        r++;
        if(r==n)
        {
            cout<<-1;
            return;
        }
    }
    cout<<r;
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
