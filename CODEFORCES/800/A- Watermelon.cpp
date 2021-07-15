#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-10-2021 , 9:45 pm
void test_case()
{
    ll n;
    cin>>n;
    (n%2==0 && n>2)?cout<<"YES":cout<<"NO";
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
