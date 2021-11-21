#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 2:19 am
string arr[10]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
void test_case()
{
    ll n;
    cin>>n;
    vector<string>v;
    if(!n)
    {
        cout<<arr[0];
        return;
    }
    while(n>0)
    {
        ll m=n%10;
        n/=10;
        v.push_back(arr[m]);
    }
    for(auto x:v)cout<<x<<endl;
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
