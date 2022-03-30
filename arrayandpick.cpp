#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    if(2*k>=n){
        cout<<"-1"<<endl;
        continue;
    }
    for(int i=0;i<n;i++){
        a[i]=i+1;



    }
    for(int i=0;i<k;i++){

        int l1=2*i+1; int l2=l1+1;

        swap(a[l1],a[l2]);
    }
    for(int i=0;i<n;i++){

        cout<<a[i]<<" ";
    }
    cout<<endl;



}



}
