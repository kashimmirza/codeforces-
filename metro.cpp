#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m;
cin>>n>>m;
int a[n+1];
int b[n+1];
for(int i=0;i<n;i++){

    cin>>a[i];
}
for(int j=0;j<n;j++){
    cin>>b[j];
}
int flag =0;
if(a[0]==0){
    flag =1;
}
else if(a[m-1]==0){
    int temp =0;
    for(int i=m;i<n;i++){
        if(a[i]==1&&b[i]==1){
            temp =1;
        }
    }
    if(temp==0){
        flag=1;
    }
    if(temp ==1){
        if(b[m-1]==0){
            flag =1;
        }
    }
}
if(flag ==0){
    cout<<"Yes"<<endl;
}
else
    cout<<"No"<<endl;






}
