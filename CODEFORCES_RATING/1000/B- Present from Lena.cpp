#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    string arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n-i;j++)arr[i]+="  ";
        for(int j=0;j<i;j++)arr[i]+='0'+j,arr[i]+=" ";
        for(int j=i;j>0;j--)arr[i]+='0'+j,arr[i]+=" ";
        arr[i]+='0';
    }
    for(int i=0;i<n+1;i++)cout<<arr[i]<<endl;
    for(int i=n-1;i>=1;i--)cout<<arr[i]<<endl;
    cout<<arr[0];
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}