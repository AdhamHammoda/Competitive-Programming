#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    ll odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        odd+=arr[i]%2;
    }
    if(odd<k || odd%2!=k%2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(k==1)break;
            if(arr[i]%2 && k)cout<<i+1<<" ",k--;
        }
        cout<<n<<endl;
    }
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
