#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n]={0},pos[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        if(!pos[arr[i]])pos[arr[i]]=i;
        else c+=(i-pos[arr[i]])>1;
    }
    c?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}