#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    vector<ll>p1,p2;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')p1.push_back(i);
        if(s[i]=='B' && s[i+1]=='A')p2.push_back(i);
    }
    if(!p1.size() || !p2.size())cout<<"NO";
    else if(abs(p1[0]-p2.back())>=2)cout<<"YES";
    else if(abs(p1.back()-p2[0])>=2)cout<<"YES";
    else cout<<"NO";
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