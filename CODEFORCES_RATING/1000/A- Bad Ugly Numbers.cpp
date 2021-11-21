#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<2;
    n--;
    for(int i=0;i<n;i++)cout<<3;
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}
