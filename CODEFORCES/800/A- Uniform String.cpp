#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 10:20 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        char a='a'+ i%k;
        cout<<a;
    }
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
