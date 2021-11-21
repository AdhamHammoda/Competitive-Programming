#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,a,b;
    cin>>n>>b>>a;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll mxa=a,mx=0;
    for(int i=0;i<n;i++)
    {
        if(!a && !b)
        {
            cout<<i;
            return;
        }
        if(arr[i])
        {
            if(b && a<mxa)
            {
                b--;
                a++;
            }
            else if(a)a--;
            else if(b)b--;
        }
        else
        {
            if(a)a--;
            else if(b)
            {
                b--;
            }
        }
    }
    cout<<n;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}