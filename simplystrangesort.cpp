#include<bits/stdc++.h>
using namespace std;


int main(){

int n;
int t;
cin>>t;
while(t--){
    cin>>n;

    int a[n];
for(int i=0;i<n;i++){

    cin>>a[i];
}
int c=0;
for(int i =1;i<n;i++){
        c=0;

    if(i%2!=0){
      if(a[i-1]>a[i+2-1]){
        c++;
      }
    }
    else if(a[i]%2==0){
        if(a[i-1]>a[i+2-1]){
            c++;
        }
    }
}
cout<<c<<endl;
}








}
