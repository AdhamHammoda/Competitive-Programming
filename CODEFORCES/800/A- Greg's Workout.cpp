#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:29 am
void test_case()
{
    ll n;
    cin>>n;
    ll freq[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        freq[i%3]+=a;
    }
    ll mx=max({freq[0],freq[1],freq[2]});
    if(mx==freq[0]) cout<<"chest";
    else if(mx==freq[1])cout<<"biceps";
    else cout<<"back";
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
