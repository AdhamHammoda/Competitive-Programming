#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    ll arr[n];
    ll c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2)c1+=(arr[i]%2!=i%2);
        else (c2+=arr[i]%2!=i%2);
    }
    if(c2!=c1)cout<<-1<<endl;
    else cout<<c2<<endl;
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
