using namespace std;
#include<iostream>
#include<iomanip>

int main()
{
        int t;
        double q=0,p=0,exp=0;
        cin>>t;
        for(int i=0;i<t;i++)
        {   cin>>q>>p;
            if(q>1000)
          {
              exp=(q*p*0.9);
            cout<<fixed<<setprecision(6)<<exp<<"\n";
          }
          else
          {
              exp=q*p;
              cout<<fixed<<setprecision(6)<<exp<<"\n";

          }
        }
        return 0;
}
