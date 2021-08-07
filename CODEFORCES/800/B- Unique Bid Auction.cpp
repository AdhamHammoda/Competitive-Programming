#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>freq;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    ll mn=1e18,ind=-2;
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]==1 && arr[i]<mn)
        {
            mn=min(mn,arr[i]);
            ind=i;
        }
    }
    cout<<ind+1<<endl;
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
