#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    bool no=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)no+=(arr[i]%2!=arr[i-1]%2);
    }
    cout<<(no?"NO":"YES")<<endl;
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
