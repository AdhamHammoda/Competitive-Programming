#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n>1)
    {
        if(n%2==0)
        {
            n/=2;
            c++;
        }
        else if(n%3==0)
        {
            n*=2;
            n/=3;
            c++;
        }
        else if(n%5==0)
        {
            n*=4;
            n/=5;
            c++;
        }
        else break;
    }
    if(n==1)
    {
        cout<<c<<endl;
    }
    else cout<<-1<<endl;
}
int main()
{
    //    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}