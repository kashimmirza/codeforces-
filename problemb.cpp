#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
int k1, k2,w,b;
for(int i=0;i<t;i++){
    cin>>n;
    cin>>k1>>k2;
    cin>>w>>b;
    int sum=0;
    sum=k1+k2;

    if(sum%(w*2)!=0){
        cout<<"NO"<<endl;
    }
    else {
        n=n*2-sum;
        b=b*2;
        if((b+(w*2))==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }
}







}
