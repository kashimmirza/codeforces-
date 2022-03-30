#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n, y;
    int k=0;
    if(n==1&&y==1){

        k=0;
    }
    else if((n%2==0&&y%2!=0)||(n%2!=0&&y%2==0)){
            k=2;


    }

    else if((n%2==0&&y%2==0)||(n%2!=0&&y%2!=0)){

        k=1;
    }
    cout<<k<<endl;


}





}
