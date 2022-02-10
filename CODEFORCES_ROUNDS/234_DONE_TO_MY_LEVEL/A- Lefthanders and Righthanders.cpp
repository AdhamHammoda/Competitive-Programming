#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=4e4+5;
void test_case()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<n/2;i++)
   {
       if(s[i]=='L')cout<<i+1<<" "<<(i+(n/2)+1)<<endl;
       else cout<<i+(n/2)+1<<" "<<i+1<<endl;
   }
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}