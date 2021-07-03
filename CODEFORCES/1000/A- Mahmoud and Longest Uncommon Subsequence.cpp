#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-3-2021 , 2:44 AM
void test_case()
{
   string a,b;
   cin>>a>>b;
   a==b?cout<<-1:cout<<max(a.size(),b.size());
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
