#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 4:24 am
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll arr[n];
    ll mn=1e18;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            if(s[i]=='L' && s[i-1]=='R')
            {
                ll ans=(arr[i]+arr[i-1])/2;
                ll ab=abs(ans-arr[i]);
                mn=min(mn,ab);
            }
        }
    }
    if(mn!=1e18)cout<<mn;
    else cout<<-1;
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
