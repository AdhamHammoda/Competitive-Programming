#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=2e5+5;
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
ll n;
string s;
cin>>n;
cin>>s;
ll c=0;
for(int i=2;i<s.size();i++)
{
    if(s[i]=='x' && s[i-1]=='x' && s[i-2]=='x')c++;
}
cout<<c;
}