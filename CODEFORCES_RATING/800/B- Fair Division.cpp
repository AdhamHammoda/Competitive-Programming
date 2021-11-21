#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==1){sum+=1;c1++;};
            if(a==2){sum+=2;c2++;}
        }
        if(sum%2==0)
        {
            if(c1==0 && c2%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
