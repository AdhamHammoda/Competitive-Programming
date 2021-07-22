#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-21-2021 , 12:10 pm
ll n1,n2;
void test_case()
{
    if(__gcd(n1,n2)==1)
    {
        printf("%10d%10d    Good Choice\n\n", n1, n2);
    }
    else
    {
       printf("%10d%10d    Bad Choice\n\n", n1, n2);
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
//    t=1;
    while(cin>>n1>>n2)
    {
        test_case();
    }
}
