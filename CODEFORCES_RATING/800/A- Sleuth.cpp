#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    getline(cin,s);
    for(int i=s.size()-2;i>=0;i--)
    {
        if(s[i]==' ')continue;
        char a=s[i];
        if(a=='a' || a=='e' || a=='i' || a=='u' || a=='o' || a=='y'
        || a=='A' || a=='E' || a=='I' || a=='U' || a=='O' || a=='Y')cout<<"YES";
        else cout<<"NO";
        exit(0);
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}