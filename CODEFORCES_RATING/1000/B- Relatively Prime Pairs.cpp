#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 4:49 pm
void test_case()
{
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<=r;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
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
