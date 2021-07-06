#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-6-2021 , 7:11 am
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll mn=min(a,b);
    cout<<mn<<" ";
    a-=mn;
    b-=mn;
    cout<<(a/2) + (b/2);
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
