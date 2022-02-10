#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
string grid[35][35];
void test_case()
{
    map<string,pair<ll,ll>>pos;
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)grid[i][j]="";
    while(k--)
    {
        string s;
        cin>>s;
        if(s[0]=='-')
        {
            string a;
            cin>>a;
            if(pos.find(a)!=pos.end())
            {
                cout<<pos[a].first<<" "<<pos[a].second<<endl;
                if(pos[a].first!=-1 && pos[a].second!=-1)grid[pos[a].first][pos[a].second]="";
                pos[a]={-1,-1};
            }
            else cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            ll x,y;
            cin>>x>>y;
            string a;
            cin>>a;
            if(grid[x][y]=="")
            {
                grid[x][y]=a;
                pos[a]={x,y};
                continue;
            }
            bool tam=false;
            for(int j=y;j<=m;j++)
            {
                if(grid[x][j]=="")
                {
                    tam=true;
                    grid[x][j]=a;
                    pos[a]={x,j};
                    break;
                }
            }
            if(tam)continue;
            bool can=false;
            for(int i=x+1;i<=n;i++)
            {
                if(can)break;
                for(int j=1;j<=m;j++)
                {
                    if(can)break;
                    if(grid[i][j]=="")
                    {
                        grid[i][j]=a;
                        pos[a]={i,j};
                        can=true;
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}