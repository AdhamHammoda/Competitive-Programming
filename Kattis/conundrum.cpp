#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    char arr[3]={'P','E','R'};
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]!=arr[i%3]);
    }
    cout<<sum;
}
int main()
{
    FIO
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
