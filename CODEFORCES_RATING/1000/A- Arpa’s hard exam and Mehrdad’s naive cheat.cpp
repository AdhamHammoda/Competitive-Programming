#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , number theory
/// 7-3-2021 , 4:26 AM
void test_case()
{
    ll arr[5]={8,4,2,6};
    ll n;
    cin>>n;
    if(!n)cout<<1;
    else cout<<arr[(n%4 - 1%4 +4)%4];
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
