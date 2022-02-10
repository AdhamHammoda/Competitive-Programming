#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll freq[4]={0,0,0,0};
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        freq[x%3]++;
    }
    cout<<(freq[0]/2) + min(freq[1],freq[2]);
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