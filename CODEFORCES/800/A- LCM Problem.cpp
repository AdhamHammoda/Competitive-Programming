#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:26 am
void test_case()
{
    ll l,r;
    cin>>l>>r;
    if(l*2>r)cout<<-1<<" "<<-1<<endl;
    else cout<<l<<" "<<l*2<<endl;
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
