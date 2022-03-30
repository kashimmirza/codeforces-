#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;

int a[5005];
for(int i=0;i<n;i++){
    cin>>a[i];





}
int sum1=0;
for(int i=1;i<n;i++){
        sum1+= max(0,k-a[i]-a[i+1]);
        a[i]=a[i]+sum1;




}
cout<<sum1<<endl;
for(int i=0;i<n;i++){

    cout<<a[i]<<" ";
}





}
