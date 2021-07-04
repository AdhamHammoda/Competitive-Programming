#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// maths
/// 7-3-2021 , 8:19 pm
void test_case()
{
    ll n,t;
    cin>>n>>t;
    ll lg=log10(t)+1;
    if(n<lg)
    {
        cout<<-1;
        return;
    }
    cout<<t;
    for(int i=1;i<n;i++)
    {
        if(t==10 && i==n-1)break;
       cout<<0;
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
