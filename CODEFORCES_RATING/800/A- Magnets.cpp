#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:15 AM
/// Read Statements carefully
void test_case()
{
    ll n;
    cin>>n;
    string arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)sum+=(arr[i-1][1]==arr[i][0]);
    }
    cout<<sum+1;
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
