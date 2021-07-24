#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 2:57 pm
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=0;i<=10000;i++)
    {
        if(a+i*b>=c-d*i)
        {
            cout<<a+i*b<<endl;
            return;
        }
        if(a+(i+1)*b>=c-d*i)
        {
            cout<<c-d*i<<endl;
            return;
        }
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
