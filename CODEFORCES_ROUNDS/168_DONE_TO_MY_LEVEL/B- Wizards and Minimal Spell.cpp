#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    string r="";
    bool tam=false;
    bool out=false;
    while(getline(cin,s))
    {
        bool amp=false;
        for(auto x:s)
        {
            if(x!=' ' && x=='#')
            {
                amp=true;
                break;
            }
            else if(x!=' ' && x!='#')
            {
                break;
            }
        }
        if(amp)
        {
            if(tam)cout<<endl;
            if(out)cout<<r<<endl;
            cout<<s;
            r="";
            tam=1;
            out=0;
        }
        else
        {
            for(auto x:s)if(x!=' ' && x!='\n')r+=x;
            out=1;
        }
    }
    if(out)
    {
        if(tam)cout<<endl;
        cout<<r;
    }
    cout<<endl; 
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