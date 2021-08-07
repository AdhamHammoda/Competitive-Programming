#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            ll mx=max(arr[i],arr[i-1]);
            ll mn=min(arr[i],arr[i-1]);
            while(mn*2<mx)
            {
                mx=mx/2 + mx%2;
                c++;
            }
        }
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
