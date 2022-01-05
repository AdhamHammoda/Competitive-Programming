#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
int dp[505][30][30];
int n,m;
int col[505][30][2];
pair<int,int> anss[505];
int solve(int idx,int col1,int col2)
{
    if(idx==n)return 0;
    int &ans=dp[idx][col1][col2];
    if(~ans)return ans;
    ans=1e7;
    for(int a=0;a<26;a++)
    {
        for(int b=0;b<26;b++)
        {
            if(a!=b && a!=col1 && b!=col2)
            {
                int tmp=solve(idx+1,a,b)+(m-col[idx][a][0]-col[idx][b][1]);
                if(ans>=tmp)ans=tmp;
            }
        }
    }
    return ans;
}
void build(int idx,int col1,int col2)
{
    if(idx==n)return;
    int &ans=dp[idx][col1][col2];
    for(int a=0;a<26;a++)
    {
        for(int b=0;b<26;b++)
        {
            if(a!=b && a!=col1 && b!=col2
            && ans==solve(idx+1,a,b)+(m-col[idx][a][0]-col[idx][b][1]))
            {
                anss[idx]={a,b};
                build(idx+1,a,b);
                return;
            }
        }
    }
}
void test_case()
{
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
        for(int j=0;j<m;j++)col[i][grid[i][j]-'a'][j%2]++;
    }
    memset(dp,-1,sizeof dp);
    cout<<solve(0,29,29)<<endl;
    build(0,29,29);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int dif1='a'+anss[i].first,dif2='a'+anss[i].second;
            cout<<(j%2==0?(char)dif1:(char)dif2);
        }
        cout<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
