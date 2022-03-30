#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t;
cin>>t;
while(t--){
cin>>n;
int a[n+1];
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum = sum + a[i];



}
int anew[n+1];
for(int i=0;i<n;i++){
    anew[i]=sum-a[i];



}
for(int i=0;i<n;i++){
        cout<<anew[i]<<" ";


}
cout<<endl;

}
}
