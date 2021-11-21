#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        long long alice=0,bob=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]%2==0)
            {
                alice+=arr[i];
            }
            else if(i%2 && arr[i]%2)
            {
                bob+=arr[i];
            }
        }
        if(alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        else if(bob>alice)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
    }
}