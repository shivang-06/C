using namespace std;
#include<iostream>
#include<vector>
int main()
{       long num;
cin>>num;
        int t[200],m=0;
        int x,temp;
        long a=num;
        for(int j=0;a>0;j++)
        {
            x=a%10;
            t[j]=x;
            a=a/10;
        }
        cout<<j;
        for(int i=;i>=0;i--)
        {
            cout<<" "<<a[i];
        }

}
