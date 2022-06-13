#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll m=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        i?m=m&arr[i]:m=arr[i];
    }
    cout<<m<<endl;
}
int main()
{
    FIO
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}