#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-17-2021 , 1:19 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n],arr2[n];
    bool allinc=true;
    bool alldec=true;
    ll f=-1,s=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
        if(i)if(arr[i]>arr[i-1])alldec=false;
        if(i)if(arr[i]<arr[i-1])allinc=false;
    }
    if(allinc)
    {
        cout<<"yes"<<endl<<1<<" "<<1;
        return;
    }
    if(alldec)
    {
        cout<<"yes"<<endl<<1<<" "<<n;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(arr[i]>arr[i+1])
            {
                f=i;
                break;
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            s=i;
            break;
        }
    }
    vector<ll> v;
    for(int i=f;i<=s;i++)
    {
        v.push_back(arr[i]);
    }
    reverse(v.begin(),v.end());
    ll j=0;
    for(int i=f;i<=s;i++)
    {
        arr[i]=v[j];
        j++;
    }
    bool issort=true;
    for(int i=0;i<n;i++)
    {
        if(i)if(arr[i]<arr[i-1])
        {
            issort=false;
            cout<<"no";
            return;
        }
    }
    cout<<"yes"<<endl<<f+1<<" "<<s+1;
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
