#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 2:34 am
void test_case()
{
    char arr[4]={'H','Q','9'};
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(st.find(arr[i])!=st.end())
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
