#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n],pos[n+1];
    pos[n]=n+1;
    for(int i=0;i<n;i++)cin>>arr[i],pos[i]=n+1;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        pos[arr[i]]=min(pos[arr[i]],(ll)i);
        if(pos[arr[i]]!=i)ans+=(i-pos[arr[i]]>1);
    }
    cout<<(ans?"YES":"NO")<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
