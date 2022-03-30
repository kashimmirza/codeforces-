#include<bits/stdc++.h>
using namespace std;
 bool issafe(int **arr, int x, int y, int n){
     for(int row=0;row<x;row++){

        if(arr[row][y]==1){

            return false;
        }
     }
     int row=x, col =y;
     while(row>=0&&col>=0){

        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
     }
     while(col<n&&row>=0){
        if(arr[row][col]==1){

            return false;
        }
        row--;
        col++;
     }

     return true;







 }
 bool  nqueen(int ** arr, int x, int n){

     if(x>=n){
        return true;
     }
     for(int col =0;col<n;col++){
        if(issafe(arr, x, col, n)){

            arr[x][col]=1;
            if(nqueen(arr, x+1, n)){
                return true;
            }

        arr[x][col]=0;




     }






 }
 return false;
 }

int main(){

    int n;
    cin>>n;
    if(n==2||n==3){


        cout<<"Not possible"<<endl;
    }
    else {
    int **arr = new int *[n];
    for(int i=0;i<n;i++){

        arr[i] = new int[n];
        for(int j=0;j<n;j++){

            arr[i][j]=0;
        }
    }
    int cnt=0;
    for(int k=0;k<n;k++){
    if(nqueen(arr,k, n)){
            cnt++;
            cout<<"YES"<<endl;

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    }
    cout<<cnt<<endl;







}
}

