#include <bits/stdc++.h>
using namespace std;
long long val[200008];
int n;
long long dp[200008];
long long solve(int idx)
{
    long long op1=0,op2=0;
    if(idx>n)
    {
        return 0;
    }
    if(dp[idx]!=-1)
    {
        return dp[idx];
    }
    if(idx<=n)
    {
        op1=solve(idx+val[idx])+val[idx];
    }
    return dp[idx]=op1;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            dp[j]=-1;
            cin>>val[j];
        }
        long long mx=0;
        for(int k=1;k<=n;k++)
        {
            mx=max(mx,solve(k));
        }
        cout<<mx<<endl;
    }
}