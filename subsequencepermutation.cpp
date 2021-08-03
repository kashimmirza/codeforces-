#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

int n;
cin>>n;
string a;
cin>>a;
string b;



b=a;


sort(b.begin(),b.end());
int c=0;
for(int i=0;i<n;i++){

    if(a[i]!=b[i]){

        c++;
    }
}
cout<<c<<endl;
    }






}
