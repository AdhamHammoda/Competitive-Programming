#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 5:35 pm
void test_case()
{
    ll n;
    cin>>n;
    if(n<=2)cout<<1<<endl<<1;
    else if(n==3)cout<<2<<endl<<"1 3";
    else if(n==4)cout<<4<<endl<<"3 1 4 2";
    else
    {
        cout<<n<<endl;
        for(int i=n;i>=1;i-=2)
        {
            cout<<i<<" ";
        }
        for(int i=n-1;i>=1;i-=2)
        {
            cout<<i<<" ";
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
