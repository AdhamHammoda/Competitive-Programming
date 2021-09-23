#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll c=0;
void test_case()
{
    c++;
    if(c==1)return;
    string s;
    getline(cin,s);
    set<char>st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    s+="   ";
    for(int i=0;i<s.size();i++)
    {
        if(!i)cout<<s[i];
        else
        {
            if(st.find(s[i])!=st.end() && s[i]==s[i+2] && s[i+1]=='p')cout<<s[i],i+=2;
            else cout<<s[i];
        }
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=2;
    while(t--)
    {
        test_case();
    }
}
