#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];


    }
    int c=0;
 c=(2*n)/(a[0]);

    /*for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j+=a[i]){
            if(j>i&&a[i-1]*a[j-1]==i+j){

                c++;
            }

        }


    }*/
    cout<<c<<endl;



}






}
