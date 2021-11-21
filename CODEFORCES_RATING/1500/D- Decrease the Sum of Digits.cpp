#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
double pi=acos(-1);
void test_case()
{
    string s;
    ll ss;
    cin>>s>>ss;
    ll sum=0;
    ll idx=0;
    for(int i=0;i<s.size();i++)
    {
        ll x=s[i]-'0';
        sum+=x;
        if(ss-sum<10 && ss-sum>0)
        {
            idx=i;
        }
    }

    if(sum<=ss)cout<<0<<endl;
    else
    {
       ll diff=s.size()-idx;
       ll newn=pow(10,diff);
       if(s[0]-'0'>=ss)cout<<newn-stoll(s)<<endl;
       else cout<<(newn/10)-stoll(s.substr(idx+1))<<endl;
    }
}


int main(){
    IO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}