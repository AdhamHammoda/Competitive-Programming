#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    ll a=arr[0],b=arr[1],c=arr[2],d=arr[3];
    if(a+b>c || b+c>d || a+c>d)cout<<"TRIANGLE";
    else if(a+b==c || b+c==d || a+c==d)cout<<"SEGMENT";
    else cout<<"IMPOSSIBLE";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}