#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 5:02 pm
void test_case()
{
   ll a,b,s;
   cin>>a>>b>>s;
   if((abs(a)+abs(b))%2==s%2 && s>=abs(a)+abs(b))cout<<"Yes";
   else cout<<"No";
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
