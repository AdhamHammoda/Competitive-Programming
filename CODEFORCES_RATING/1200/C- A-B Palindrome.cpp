#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
char grid[1000][1000];
void test_case()
{
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll ca=0,cb=0;
    ll n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1] && s[i]=='0')
        {
            ca+=2;
        }
        else if(s[i]==s[n-i-1] && s[i]=='1')
        {
            cb+=2;
        }
        else if(s[i]!=s[n-i-1] && s[i]=='0' && s[n-i-1]=='?')
        {
            ca+=2;
            s[n-i-1]='0';
        }
        else if(s[i]!=s[n-i-1] && s[i]=='1' && s[n-i-1]=='?')
        {
            cb+=2;
            s[n-i-1]='1';
        }
        else if(s[i]!=s[n-i-1] && s[i]=='?' && s[n-i-1]=='0')
        {
            ca+=2;
            s[i]='0';
        }
        else if(s[i]!=s[n-i-1] && s[i]=='?' && s[n-i-1]=='1')
        {
            cb+=2;
            s[i]='1';
        }
    }
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-1-i] && s[i]=='?')
        {
            if(a-2>=ca)
            {
                s[i]=s[n-i-1]='0';
                ca+=2;
            }
            else if(b-2>=cb)
            {
                s[i]=s[n-i-1]='1';
                cb+=2;
            }
        }
    }
    if(n%2)
    {
        if(s[n/2]=='1')cb++;
        else if(s[n/2]=='0')ca++;
        if(s[n/2]=='?' && a-1>=ca)
        {
            ca++;
            s[n/2]='0';
        }
        else if(s[n/2]=='?' && b-1>=cb)
        {
            cb++;
            s[n/2]='1';
        }

    }
    if(ca==a && cb==b)
    {
        cout<<s<<endl;
    }
    else cout<<-1<<endl;
}
int main()
{
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}