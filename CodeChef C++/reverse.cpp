using namespace std;
#include<iostream>

int main()
{
        int t,num,rev=0,n;
        cin>>t;
        for(int i=0;i<t;i++)
        {   cin>>num;
            n=0;
            rev=0;
            while(num!=0)
            {
                n=num%10;
                rev=(rev*10)+n;
                num=num/10;
            }
            cout<<rev<<"\n";

        }
        return 0;
}
