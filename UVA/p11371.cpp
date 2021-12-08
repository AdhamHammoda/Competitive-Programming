#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
string s;
void test_case()
{
    sort(s.begin(),s.end());
    ll ind=0;
    while(s[ind]=='0' && ind<s.size()-1)ind++;
    swap(s[0],s[ind]);
    ll ans1=stoll(s);
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    ll ans2=stoll(s);
    cout<<ans2<<" - "<<ans1<<" = "<<ans2-ans1<<" = 9 * "<<(ans2-ans1)/9<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(cin>>s)
    {
        test_case();
    }
}
