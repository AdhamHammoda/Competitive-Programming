#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll ptr=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            ptr=i;
            break;
        }
    }
    if(ptr==-1)cout<<"NO"<<endl;
    else
    {
        char a='a';
        ll ptr1=ptr;
        ll ptr2=ptr+1;
        ll j=0;
        while(j<s.size())
        {
            if(ptr1>-1 && s[ptr1]==a)
            {
                ptr1--;
            }
            else if(ptr2<s.size() && s[ptr2]==a)
            {
                ptr2++;
            }
            else if(ptr1==-1 && ptr2==s.size())break;
            else
            {
                cout<<"NO"<<endl;
                return;
            }
            a++;
            j++;
        }
        cout<<"YES"<<endl;
    }
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
   string s;
    while(t--)
    {
        test_case();
    }
}