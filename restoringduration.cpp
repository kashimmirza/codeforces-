#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;

cin>>n;
int a[n+1];
int b[n+1];
for(int i=0;i<n;i++){

cin>>a[i];

}





for(int i=0;i<n;i++){

cin>>b[i];

}
int d[n+1];
d[0]=b[0]-a[0];
for(int i=1;i<n;i++){

    if(a[i]>b[i-1]){

        d[i]=b[i]-a[i];

    }
    else{

        a[i]=b[i-1];
        d[i]=b[i]-a[i];

    }

}
for(int i=0;i<n;i++){

    cout<<d[i]<<" ";
}
cout<<endl;




}
}
