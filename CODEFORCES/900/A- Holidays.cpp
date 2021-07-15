#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:38 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[7]={0,0,1,1,1,1,1};
    ll mnsum=0;
    ll mxsum=0;
    for(int i=0;i<n;i++)
    {
        mnsum+=arr[(i+2)%7]==0;
        mxsum+=arr[i%7]==0;
    }
    cout<<mnsum<<" "<<mxsum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
