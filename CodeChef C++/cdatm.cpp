#include<iostream>
using namespace std;
int main()
{
        int wd;
        float bkcharge=0.50;
        float bal;
        cout<<"Enter the initial bank balance : $";
        cin>>bal;
        cout<<"\nEnter the amount you wish to withdraw : $";
        cin>>wd;
        if (wd%5==0)
        {
            if(wd>bal)
            {
                cout<<"\n\n\t\t"<<bal;
                return 0;
            }
            bal=bal-(wd+bkcharge);
            cout<<"\n\n\t\t"<<bal;
        }
        else
            cout<<"\n\n\t\t"<<bal;
        return 0;
}
