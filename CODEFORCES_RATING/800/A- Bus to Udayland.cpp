#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-6-2021 , 7:00 pm
void test_case()
{
    ll n;
    cin>>n;
    string arr[n];
    bool f=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=0;j<arr[i].size();j++)
        {
            if(j && !f)
            {
                if(arr[i][j]==arr[i][j-1] && arr[i][j]=='O')
                {
                    f=true;
                    arr[i][j]=arr[i][j-1]='+';
                }
            }
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<arr[i]<<endl;
    }
    else cout<<"NO";
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
