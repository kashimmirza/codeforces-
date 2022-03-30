
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){


    int n;
    cin>>n;
    int a[n];
    int min_a;
    int max_a;
    for(int i=0;i<n;i++){

        cin>>a[i];
    }
    min_a= a[0];
    max_a=a[0];
    for(int  i=0;i<n;i++){
            if(a[i]<min_a){

                min_a= a[i];
            }



    }
    for(int i=0;i<n;i++){
            if(a[i]>max_a){

                max_a= a[i];
            }



    }
    int re = max_a-min_a;
    cout<<re<<endl;


}




}
