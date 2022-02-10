#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
int n,k;
string s;
int dp[500005][30];
int col[500005];
int solve(int idx,int prv)
{
    if(idx==n)return 0;
    if(dp[idx][prv]!=-1)return dp[idx][prv];
    int ans=1e8;
    for(int i=0;i<k;i++)
    {
        if(i==prv)continue;
        ans=min(ans,solve(idx+1,i)+(col[idx]!=i));
    }
    return dp[idx][prv]=ans;
}
void build(int idx,int prv)
{
    if(idx==n)return;
    int op=1e8;
    int num=-1;
    for(int i=0;i<k;i++)
    {
        if(i==prv)continue;
        int tmp=dp[idx+1][i]+(col[idx]!=i);
        if(tmp<op)op=tmp,num=i;
    }
    char a='A'+num;
    cout<<a;
    build(idx+1,num);
}
void test_case()
{
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)col[i]=s[i]-'A';
    memset(dp,-1,sizeof dp);
    cout<<solve(0,k)<<endl;
    build(0,k);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}