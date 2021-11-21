#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
string s;
ll func(char a,char b)
{
    if(count(s.begin(),s.end(),a)<1 || count(s.begin(),s.end(),b)<1
    || (a==b && count(s.begin(),s.end(),a)<2))return 1e18;
    ll ind1=-1,ind2=-1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==b && ind2==-1)ind2=i;
        else if(s[i]==a && ind1==-1)ind1=i;
    }
    if(s.size()==2)return (s.size() - 1 - ind1) + (s.size()-2-ind2) + (ind2<ind1);
    ll ind=0;
    if(ind1==0 || ind2==0)
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0' && i!=ind1 && i!=ind2)ind++;
            else break;
        }
    }
    return (s.size() -1 -ind1) + (s.size()-2-ind2) + (ind2<ind1) +ind;
}
void test_case()
{
    cin>>s;
    ll mn=1e18;
    mn=min({func('5','0'),func('0','0'),func('2','5'),func('7','5')});
    cout<<(mn==1e18?-1:mn);
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
