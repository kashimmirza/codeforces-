#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int min_e;
if(a>=b){

    swap(a, b);
}
if(c>=d){
    swap(c, d);
}
if(a>=c){
    swap(a, c);
}
if(b>=d){
    swap(b,d);
}
if(b>=c){
    swap(b,c);
}
cout<<a*c<<endl;






}
}
