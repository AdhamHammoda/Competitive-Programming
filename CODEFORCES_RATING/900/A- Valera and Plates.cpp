#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 7:15 am
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            if(m)m--;
            else c++;
        }
        else if(arr[i]==2)
        {
            if(k)k--;
            else if(m)m--;
            else c++;
        }
    }
    cout<<c;
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
