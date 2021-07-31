#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:20 am
vector<ll> v;
void test_case()
{
    ll n;
    cin>>n;
    cout<<upper_bound(v.begin(),v.end(),n)-v.begin()<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
    for(int i=1;i<=9;i++)
    {
        ll sum=0;
        for(int j=0;j<18;j++)
        {
            sum=10*sum+i;
            v.push_back(sum);
        }
    }
    sort(v.begin(),v.end());
//    t=1;
    while(t--)
    {
        test_case();
    }

}
