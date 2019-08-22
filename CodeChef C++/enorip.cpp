using namespace std;
#include<iostream>

int main()
{
        int n,k,t,j=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t%k==0)
             {
                 j++;
             }
        }
        cout<<j<<"\n";
        return 0;
}
