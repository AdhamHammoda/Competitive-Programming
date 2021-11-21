#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , maths
/// 7-3-2021 , 4:31 AM
void test_case()
{
    ll a,b;
    cin>>a>>b;
    if(b-a<=1)cout<<-1;
    else if(b-a==2)
    {
        if(a%2 && b%2)cout<<-1<<endl;
        else cout<<a<<" "<<a+1<<" "<<a+2;
    }
    else
    {
        a+=a%2;
        cout<<a<<" "<<a+1<<" "<<a+2;
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
