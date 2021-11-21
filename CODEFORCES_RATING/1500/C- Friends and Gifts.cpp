#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(i);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i])s.erase(arr[i]);
    }
    ll i1=0,i2=0;
    for(int i=0;i<n;i++)
    {
        if(!arr[i])
        {
            if(s.size()==2 && !i1)
            {
                i1=i;
                continue;
            }
            if(s.size()==2 && !i2)
            {
                i2=i;
                continue;
            }
            if(*s.begin()!=(i+1))
            {
                arr[i]=*s.begin();
                s.erase(*s.begin());
            }
            else
            {
                arr[i]=*s.rbegin();
                s.erase(*s.rbegin());
            }
        }
    }
    if(i1+1==*s.begin())
    {
        arr[i1]=*s.rbegin();
        arr[i2]=*s.begin();
    }
    else if(i1+1==*s.rbegin())
    {
        arr[i1]=*s.begin();
        arr[i2]=*s.rbegin();
    }
    else if(i2+1==*s.begin())
    {
        arr[i1]=*s.begin();
        arr[i2]=*s.rbegin();
    }
    else
    {
        arr[i1]=*s.rbegin();
        arr[i2]=*s.begin();
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
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
