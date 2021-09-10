#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,p,s;
    cin>>n>>p>>s;
    for(int i=0;i<s;i++)
    {
        ll k;
        cin>>k;
        ll arr[k];
        bool r=true;
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
            if(arr[j]==p)r=false;
        }
        if(!r)cout<<"KEEP"<<endl;
        else cout<<"REMOVE"<<endl;
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
