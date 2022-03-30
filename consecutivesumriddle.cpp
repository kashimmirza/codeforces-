#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b,c;
    cin>>a>>b>>c;
    int max_a=max(max(a,b),c);

    a=(max_a-a)+1;
    b= (max_a-b)+1;
    c=(max_a-c)+1;
    cout<<a<<" "<<b<<"  "<<c<<endl;


    }








}



