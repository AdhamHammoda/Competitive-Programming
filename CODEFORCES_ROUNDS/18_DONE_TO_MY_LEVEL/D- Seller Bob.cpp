#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
vector<pair<string,ll>> arr(5005);
vector<string>powers(2005);
ll n;
bool vis[5005];
string mul(vector<string> v2)
{
    string s1=v2.front(),s2=v2.back();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    vector<string> v;
    for(int i=0;i<s2.size();i++)
    {
        string r="";
        for(int k=0;k<i;k++)
        {
            r.push_back('0');
        }
        int cr=0;
        for(int j=0;j<s1.size();j++)
        {
            int a=s2[i]-'0';
            int b=s1[j]-'0';
            int pr=a*b + cr;
            cr=pr/10;
            int mod=pr%10;
            if(j!=s1.size()-1)r.push_back('0'+mod);
            else
            {
                r.push_back('0'+mod);
                if(cr!=0)r.push_back('0'+cr);
            }
        }
        v.push_back(r);
    }
    reverse(v.back().begin(),v.back().end());
    return v.back();
}
string add(vector<string> v)
{
    reverse(v[0].begin(),v[0].end());
    reverse(v[1].begin(),v[1].end());
    if(v[0].size()<v[1].size())v[0]+=string(v[1].size()-v[0].size()+1,'0');
    else v[1]+=string(v[0].size()-v[1].size()+1,'0');
    string res="";
    ll rescar=0;
    for(int i=0;i<250*250;i++)
    {
        if(i>=v.back().size())break;
        int ressum=0;
        ressum+=rescar;
        for(auto x:v)
        {
            if(x.size()<=i)continue;
            int a=x[i]-'0';
            ressum+=a;
        }
        rescar=ressum/10;
        res.push_back('0'+(ressum%10));
    }
    if(rescar!=0)res.push_back('0'+rescar);
    while(res.back()=='0')res.pop_back();
    reverse(res.begin(),res.end());
    if(!res.size())res="0";
    return res;
}
string anns="";
priority_queue<ll> pq;
vector<ll> win[2005];
vector<ll> sell[2005];
void test_case()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
    for(int i=0;i<n;i++)
    {
        if(arr[i].first=="win")win[arr[i].second].push_back(i);
        if(arr[i].first=="sell")pq.push(arr[i].second),sell[arr[i].second].push_back(i);
    }
    while(!pq.empty())
    {
        ll cur=pq.top();
        pq.pop();
        if(!win[cur].size() || vis[sell[cur][0]])continue;
        ll up=upper_bound(win[cur].begin(),win[cur].end(),sell[cur][0])-win[cur].begin();
        for(int i=up-1;i>=0;i--)
        {
            if(win[cur][i]<sell[cur][0] && !vis[win[cur][i]])
            {
                bool can=true;
                for(int j=win[cur][i];j<=sell[cur][0];j++)
                {
                    if(vis[j])
                    {
                        can=false;
                        break;
                    }
                }
                if(!can)continue;
                for(int j=win[cur][i];j<=sell[cur][0];j++)vis[j]=true;
                anns=add({anns,powers[cur]});
                break;
            }
        }
    }
    if(anns=="")anns="0";
    cout<<anns;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    string tmp="1";
    powers[0]=tmp;
    ll idx=0;
    while(idx<2002)
    {
        powers[idx]=tmp;
        tmp=mul({tmp,"2"});
        idx++;
    }
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}