using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
    int w;
    float c;
    cin>>w;
    cin>>c;
    if((w%5==0)&&(c>=(w+0.50)))
       {
         c-=(w+0.50);
            cout<<setprecision(2)<<fixed<<c;
       }
       else
        cout<<setprecision(2)<<fixed<<c;
       return 0;
}
