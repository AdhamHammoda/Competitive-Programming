#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-10-2021 , 10:01 pm
void test_case()
{
    ll c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    ll sum=c1+c2+c3+c4+c5;
    if(sum/5>0)sum%5?cout<<-1:cout<<sum/5;
    else cout<<-1;
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
