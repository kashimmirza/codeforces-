#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
        cin>>a[i];




}
int seraj=0;
int dima =0;
sort(a,a+n);
reverse(a,a+n);
for(int i=0, j=i+1;i<n; ){
    if(n%2!=0&&i==n-1){
            seraj+=a[n-1];
        break;
    }

        seraj+=a[i];
        dima+=a[j];
        i=j+1;
        j=i+1;

    }





cout<<seraj<<" "<<dima<<endl;





}







