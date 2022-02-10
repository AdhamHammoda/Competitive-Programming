#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    bool dot=false,att=false;
    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size()-1)if(s[i]=='a' && s[i+1]=='t' && i && !att)
        {
            cout<<"@";
            i++;
            att=true;
            continue;
        }
        if(i+2<s.size()-1)if(s[i]=='d' && s[i+1]=='o' && s[i+2]=='t' && i)
        {
            cout<<".";
            i+=2;
            continue;
        }
        cout<<s[i];
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