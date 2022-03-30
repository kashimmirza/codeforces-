#include<bits/stdc++.h>
using namespace std;
int main(){
int n=2000;
int var =0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];



}
int flag;
while(var<=n){
    flag =0;
    for(int i=0;i<n;i++){
        if(var==arr[i]){
                flag=1;
          break;


        }

    }
    if(flag==1){

        var++;
        continue;
    }
    else{
        cout<<var<<endl;
        var = n+1;
        break;


    }


}



}
