#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool non=false;
    string s1="1",s2="1";
    for(int i=1;i<n;i++)
    {
        if(!non)
        {
            if(s[i]=='1')
            {
                non=true;
                s1+="1",s2+="0";
            }
            else if(s[i]=='2')
            {
                s1+="1",s2+="1";
            }
            else s1+="0",s2+="0";
        }
        else
        {
            if(s[i]=='1')
            {
                s1+="0",s2+="1";
            }
            else if(s[i]=='2')
            {
                s1+="0",s2+="2";
            }
            else s1+="0",s2+="0";
        }
    }
    cout<<s1<<endl<<s2<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
