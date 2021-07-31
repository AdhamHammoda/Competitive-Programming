#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sumeven=0,sumodd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2==0)sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            cout<<i<<" "<<arr[i]<<" "<<sumodd-arr[i]<<" "<<sumeven<<endl;
            if(sumodd-arr[i]==sumeven)
            {
                c++;
            }
        }
        else
        {
            cout<<i<<" "<<arr[i]<<" "<<sumodd<<" "<<sumeven-arr[i]<<endl;
            if(sumeven-arr[i]==sumodd)
            {
                c++;
            }
        }
    }
    cout<<c;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
