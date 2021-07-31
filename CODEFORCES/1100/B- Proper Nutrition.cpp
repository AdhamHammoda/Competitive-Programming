#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<=n;i++)
    {
        if((n-a*i)/b>0 && (n-a*i)%b==0)
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<(n-a*i)/b;
            return;
        }
        else if((n-b*i)/a>0 && (n-b*i)%a==0)
        {
            cout<<"YES"<<endl;
            cout<<(n-b*i)/a<<" "<<i;
            return;
        }
    }
    cout<<"NO";
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
