#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n,m,a;
void test_case()
{
    cout<<(n-7)*(m-7)/2  + (a==1 && n%2==0 && m%2==0)<<endl;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(cin>>n>>m>>a)
    {
        if(n==0 && m==0 && a==0)break;
        test_case();
    }
}
