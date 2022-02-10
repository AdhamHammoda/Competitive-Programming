#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll r=s.size()-1,l=0,sz=s.size();
    ll arr[sz];
    ll c=1;
    for(auto x:s)
    {
        if(x=='r')arr[l]=c,l++;
        else arr[r]=c,r--;
        c++;
    }
    for(int i=0;i<sz;i++)printf("%ld \n",arr[i]);
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