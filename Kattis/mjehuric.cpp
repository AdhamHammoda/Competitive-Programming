#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll arr[5];
void test_case()
{
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    while(true)
    {
        bool cant=false;
        for(int i=1;i<5;i++)
        {
            if(arr[i]<arr[i-1])
            {
                swap(arr[i],arr[i-1]);
                for(int j=0;j<5;j++)cout<<arr[j]<<" ";
                cout<<endl;
            }
        }
        if(is_sorted(arr,arr+5))return;
    }
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
