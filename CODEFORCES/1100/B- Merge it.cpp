#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll freq[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]%3]++;
    }
    ll mn=min(freq[1],freq[2]);
    freq[1]-=mn;
    freq[2]-=mn;
    cout<<freq[0]+mn+(freq[1]/3)+(freq[2]/3)<<endl;

}
int main()
{
    //    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}