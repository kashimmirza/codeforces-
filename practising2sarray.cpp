#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

        cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        if(j==n-1){
            cout<<a[i][j]<<" ";
        }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0, k=j+1;j<n;j++,k++){
        if(a[j][i]==a[k][i]){
            cout<<a[j][i]<<" ";
        }
        }
    }
  }





