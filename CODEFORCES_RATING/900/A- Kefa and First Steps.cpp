#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 6:03 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll c=1,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            if(arr[i]>=arr[i-1])c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
        }
    }
    mx=max(mx,c);
    cout<<mx;
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
