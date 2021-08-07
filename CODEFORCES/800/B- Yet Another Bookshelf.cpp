#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mni=1e18,mxi=-1;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)mni=min(mni,i),mxi=max(i,mxi);
    }
    ll c=0;
    for(int i=mni;i<=mxi;i++)
    {
        c+=!arr[i];
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
