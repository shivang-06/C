#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  std::cin>>n;
  int ar[n];
  for(int i =0 ; i<n;i++){
  std::cin>>ar[i];
}
  int counter=0;
  std::sort(ar,ar+n);
  for(int j=0;j<n;j++){
    if(ar[j]==ar[j+1]){
      counter++;
      j++;
    }
    }
  std::cout<<counter;
  }

