#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n,rot;
    cin>>n>>rot;
    int a[n];
    for(int t=0;t<n;t++){
        cin>>a[t];
    }
    for(int i=0;i<rot;i++){
        int temp = a[0];
        for(int j=0;j<n;j++){
            
            a[j]=a[j+1];            
        }
        a[n-1] = temp;
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}