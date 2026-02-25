#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int flag=0;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                flag=1;
            }
            if(a[i]!=-1)
            {
                st.insert(a[i]);
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            if(st.size()>1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}