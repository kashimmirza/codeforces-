#include<bits/stdc++.h>
using namespace std;
int main(){
long long  n;
cin>>n;
long long c=0;
if(n>=1000){

    c+=n-999;
}
if(n>=1000000){

    c+=n-999999;
}
if(n>=1000000000){
    c+=n-999999999;
}
if(n>=1000000000000){
    c+=n-999999999999;
}
if(n>=1000000000000000){
    c+=n-999999999999999;


}
cout<<c<<endl;





}
