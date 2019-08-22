#include<iostream>

using namespace std;

int main()
{
        int t,num,s;
        cin>>t;
        for(int i=0;i<t;i++)
        {   cin>>num;
            s=0;
            while(num>0)
            {
                s+=num%10;
                num=num/10;
            }

            cout<<s<<"\n";

        }
return 0;
}

