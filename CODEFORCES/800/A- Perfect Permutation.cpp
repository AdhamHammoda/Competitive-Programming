#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    if(n%2)
    {
        cout<<-1;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2)cout<<i+i%2<<" ";
        else cout<<i-1<<" ";
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
