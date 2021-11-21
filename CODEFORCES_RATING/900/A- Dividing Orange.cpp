#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 9:50 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    set<ll>s;
    for(int i=1;i<=n*k;i++)
    {
        s.insert(i);
    }
    ll arr[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        s.erase(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!j)cout<<arr[i]<<" ";
            else
            {
                cout<<*s.begin()<<" ";
                s.erase(s.begin());
            }
        }
        cout<<endl;
    }
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
