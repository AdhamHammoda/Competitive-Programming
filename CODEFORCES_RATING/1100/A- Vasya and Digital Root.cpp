#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-6-2021 , 10:30 pm
void test_case()
{
    ll k,d;
    cin>>k>>d;
    if(d)
    {
        cout<<d;
        for(int i=0;i<k-1;i++)
        {
            cout<<0;
        }
    }
    else
    {
        if(k==1)cout<<0;
        else cout<<"No solution";
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
