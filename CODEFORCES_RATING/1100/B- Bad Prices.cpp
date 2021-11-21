#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    multiset<ll> ms;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ms.insert(arr[i]);
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(*ms.begin()<arr[i])c++;
        ms.erase(ms.find(arr[i]));
    }
    cout<<c<<endl;
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