#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll c=0;
map<char,ll>mp;
void func(char st,char en,ll ind,ll j,ll num)
{
    for(char a=st;a<=en;a++)
    {
        if(!j)ind=num;
        else ind=(ind*10)+num;
        mp[a]=ind;
        j++;
    }
}
void test_case()
{
    string s;
    getline(cin,s);
    c++;
    if(c==1)return;
    func('a','c',0,0,2);
    func('d','f',0,0,3);
    func('g','i',0,0,4);
    func('j','l',0,0,5);
    func('m','o',0,0,6);
    func('p','s',0,0,7);
    func('t','v',0,0,8);
    func('w','z',0,0,9);
    cout<<"Case #"<<c-1<<": ";
    ll tmp=-1e15;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            if(tmp==-1e15)cout<<" ";
            cout<<0;
            tmp=-1e15;
            continue;
        }
        char ans=s[i];
        if(mp[tmp]%10==mp[ans]%10)cout<<" ";
        cout<<mp[s[i]];
        tmp=ans;
    }
    cout<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
    t++;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
