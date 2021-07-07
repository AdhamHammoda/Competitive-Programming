#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , LAZY
/// 7-6-2021 , 9:50 pm
void test_case()
{
    ll arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    ll n;
    cin>>n;
    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
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
