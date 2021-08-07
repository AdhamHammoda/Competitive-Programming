#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s.substr(0,3)+s.substr(n-1,1)=="2020"
    || s.substr(0,2)+s.substr(n-2,2)=="2020"
    || s.substr(0,1)+s.substr(n-3,3)=="2020"
    || s.substr(0,4)=="2020" || s.substr(n-4,4)=="2020"
    )
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
