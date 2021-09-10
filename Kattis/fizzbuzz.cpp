#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll x,y,n;
    cin>>x>>y>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%x==0 && i%y==0)cout<<"FizzBuzz"<<endl;
        else if(i%x==0)cout<<"Fizz"<<endl;
        else if(i%y==0)cout<<"Buzz"<<endl;
        else cout<<i<<endl;
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
