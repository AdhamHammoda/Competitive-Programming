#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll solve(ll num,ll den)
{
    if(num>den)return solve(num-den,den)*2+1;
    else if(num<den)return solve(num,den-num)*2;
    else return 1;
}
void test_case()
{
    char c;
    ll ts,a,b;
    cin>>ts>>a>>c>>b;
    cout<<ts<<" "<<solve(a,b)<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
