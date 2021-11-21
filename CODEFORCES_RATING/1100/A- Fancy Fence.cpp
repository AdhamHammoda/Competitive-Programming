#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , lazy
/// 7-4-2021 , 12:16 am
set<double>s;
void test_case()
{
    ll n;
    cin>>n;
    if(s.find(n)!=s.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    for(int i=1;i<400;i++)
    {
        double x=i;
        s.insert((x-2)*180.0/x);
    }
    while(t--)
    {
        test_case();
    }
}
