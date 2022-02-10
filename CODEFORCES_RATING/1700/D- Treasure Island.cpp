#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
char grid[2000][2000];
ll row[2000][2000],col[2000][2000];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    vector<pair<char,ll>>ins;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]!='.' && grid[i][j]!='#')v.push_back({i,j});
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            row[i][j]=row[i][j-1]+(grid[i][j]=='#');
        }
    }
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            col[i][j]=col[i-1][j]+(grid[i][j]=='#');
        }
    }

    ll nn;
    cin>>nn;
    while(nn--)
    {
        char a;
        ll b;
        cin>>a>>b;
        ins.push_back({a,b});
    }
    set<char> ans;
    for(int k=0;k<v.size();k++)
    {
        ll cx=v[k].first;
        ll cy=v[k].second;
        bool can=true;
        for(auto x:ins)
        {
            if(x.first=='N')
            {
                if(cx-x.second>=1)
                {
                    if(col[cx][cy]-col[cx-x.second-1][cy]>0)
                    {
                        can=false;
                        break;
                    }
                    else cx=cx-x.second;
                }
                else
                {
                    can=false;
                    break;
                }
            }
            if(x.first=='S')
            {
                if(cx+x.second<=n)
                {
                    if(col[cx+x.second][cy]-col[cx-1][cy]>0)
                    {
                        can=false;
                        break;
                    }
                    else cx=cx+x.second;
                }
                else
                {
                    can=false;
                    break;
                }
            }
            if(x.first=='E')
            {
                if(cy+x.second<=m)
                {
                    if(row[cx][cy+x.second]-row[cx][cy-1]>0)
                    {
                        can=false;
                        break;
                    }
                    else cy=cy+x.second;
                }
                else
                {
                    can=false;
                    break;
                }
            }
            if(x.first=='W')
            {
                if(cy-x.second>=1)
                {
                    if(row[cx][cy]-row[cx][cy-x.second-1]>0)
                    {
                        can=false;
                        break;
                    }
                    else cy=cy-x.second;
                }
                else
                {
                    can=false;
                    break;
                }
            }
        }
        if(can)ans.insert(grid[v[k].first][v[k].second]);
    }
    if(ans.size())for(auto x:ans)cout<<x;
    else cout<<"no solution";
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