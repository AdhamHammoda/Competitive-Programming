#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    ll lef=0,rig=0,up=0,down=0;
    for(int i=0;i<s.size();i++)
    {
        lef+=(s[i]=='L');
        rig+=(s[i]=='R');
        up+=(s[i]=='U');
        down+=(s[i]=='D');
    }
    lef=min(lef,rig);
    rig=min(lef,rig);
    up=min(up,down);
    down=min(up,down);
    string r="";
    if(!down && !up && lef && rig)lef=rig=1;
    if(!rig && !lef && up && down)up=down=1;
    for(int i=0;i<lef;i++)r+="L";
    for(int i=0;i<up;i++)r+="U";
    for(int i=0;i<rig;i++)r+="R";
    for(int i=0;i<down;i++)r+="D";
    cout<<r.size()<<endl<<r<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
