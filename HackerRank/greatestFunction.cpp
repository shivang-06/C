#include<iostream>
using namespace std;
void greatest(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a>b && a>c && a>d){
      cout<<a;
    }
    else if(b>a && b>c && b>d){
      cout<<b;
    }
    else if(c>a && c>b && c>d){
      cout<<c;
    }
    else{
      cout<<d;
    }
}
int main(){
  greatest();
}
