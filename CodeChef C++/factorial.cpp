#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
long double factorial(int n)
{   long double fac=1;
    int i;
    for(i=n;i>=1;i--)
    {
        fac=fac*i;

    }
    return fac;

}
int main()
{
    int a;
    long double f;
    cout<<"Enter the number: ";
    cin>>a;
    f=factorial(a);
    cout<<"the factorial is : "<<"\t"<<f;
    getch();
    return 0;
}
