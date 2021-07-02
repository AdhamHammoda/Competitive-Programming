#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-2-2021 , 6:03 PM
void test_case()
{
    vector<ll> ind[4];
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        ind[a].push_back(i);
    }
    ll mn=min({ind[1].size(),ind[2].size(),ind[3].size()});
    cout<<mn<<endl;
    for(int j=0;j<mn;j++)
    {
        cout<<ind[1][j]+1<<" "<<ind[2][j]+1<<" "<<ind[3][j]+1<<" "<<endl;
    }
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
