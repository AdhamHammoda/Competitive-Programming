#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 8:32 pm
void test_case()
{
    ll n;
    ll arr[10]={2,7,2,3,3,4,2,5,1,2};
    cin>>n;
    cout<<arr[n%10]*arr[n/10];

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
