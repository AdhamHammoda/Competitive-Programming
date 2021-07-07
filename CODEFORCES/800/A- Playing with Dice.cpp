#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:16 pm
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll win=0,draw=0,win2=0;
    for(int i=1;i<=6;i++)
    {
        win+=(abs(a-i)<abs(b-i));
        draw+=(abs(a-i)==abs(b-i));
        win2+=(abs(a-i)>abs(b-i));
    }
    cout<<win<<" "<<draw<<" "<<win2;
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
