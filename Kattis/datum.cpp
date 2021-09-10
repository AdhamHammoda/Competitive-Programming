#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string days[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    ll a,b;
    cin>>a>>b;
    a--;
    for(int i=0;i<b-1;i++)
    {
        a+=months[i];
    }
    cout<<days[a%7];
}
int main()
{
//    FIO
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
