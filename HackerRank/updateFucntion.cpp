#include<iostream>
using namespace std;

void update(int *a,int *b) {
    int sum=0;
    int diff = 0;
    sum = *a+*b;
    if(*a>*b){
      diff = *a-*b;
    }
    else{
      diff = *b-*a;
    }
    cout<<sum<<endl;
    cout<<diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
