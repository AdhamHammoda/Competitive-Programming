#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    long double ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    long double mx=0.0;
    long double ans1=0.0,ans2=0.0;
    ans1=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    ans2=sqrt((cx-dx)*(cx-dx)+(cy-dy)*(cy-dy));
    mx=max(ans1,ans2);
    cout<<fixed<<setprecision(10)<<mx;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
