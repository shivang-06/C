using namespace std;
#include<iostream>

int main()
{
        int t,n=0;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            cin>>n;
            if(n<10)
            {
                cout<<"What an obedient servant you are!"<<"\n";

            }
            else
            {
                cout<<"-1"<<"\n";

            }
        }
        return 0;
}
