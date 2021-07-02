#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 ,7:02 PM
void test_case()
{
    ll k,r;
    cin>>k>>r;
    ll ink=k;
    ll j=1;
    while(k%10!=0 && k%10!=r)
    {
        j++;
        k=ink*j;
    }
    cout<<j;
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
